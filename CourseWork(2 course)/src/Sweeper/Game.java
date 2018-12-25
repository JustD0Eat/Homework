package Sweeper;

public class Game
{
    private Bomb bomb;
    private Flag flag;

    private GameState state;
    public GameState getState()
    {
        return state;
    }

    public Game(int cols, int rows, int bombs)
    {
        Ranges.setSize(new Coord(cols, rows));
        bomb = new Bomb(bombs);
        flag = new Flag();
    }

    public void start()
    {
        bomb.start();
        flag.start();
        state = GameState.Plays;
    }

    public Box getBox(Coord coord)
    {
        if(flag.get(coord) == Box.Empty)
            return bomb.get(coord);
        else
            return flag.get(coord);
    }

    public void pressLeftButton(Coord coord)
    {
        if(gameOver())return;
        openBox(coord);
        checkWin();
    }

    private void checkWin()
    {
        if(state == GameState.Plays)
            if(flag.getCountOfClosedBoxes() == bomb.getTotalBombs())
                state = GameState.Winner;
    }

    private void openBoxesAround(Coord coord)
    {
        flag.setOpenedToBox(coord);
        for(Coord around : Ranges.getCoordsAround(coord))
            openBox(around);
    }

    public void pressRightButton(Coord coord)
    {
        if(gameOver())return;
        flag.toggleFlagToBox(coord);
    }

    private boolean gameOver()
    {
        if(state == GameState.Plays)
            return false;
        start();
        return true;
    }

    private void openBox(Coord coord)
    {
        switch(flag.get(coord))
        {
            case Empty : setOpenedToClosedBoxesAroundNumber(coord); return;
            case Flag : return;
            case Closed :
                switch (bomb.get(coord))
                {
                    case Zero : openBoxesAround(coord);return;
                    case Bomb : openBombs(coord); return;
                    default : flag.setOpenedToBox(coord);return;
                }
        }
    }

    private void setOpenedToClosedBoxesAroundNumber(Coord coord)
    {
        if(bomb.get(coord) != Box.Bomb )
            if(flag.getCountOfFlagBoxesAround(coord) == bomb.get(coord).getNumber())
                for(Coord around : Ranges.getCoordsAround(coord))
                    if(flag.get(around) == Box.Closed)
                        openBox(around);
    }

    private void openBombs(Coord burstup)
    {
        state = GameState.Burstup;
        flag.setBombedToBox(burstup);
        for(Coord coord : Ranges.getAllCoords())
            if(bomb.get(coord) == Box.Bomb)
                flag.setOpenedToClosedBombBox(coord);
            else
                flag.setNoBombToFlagSafeBox(coord);

    }
}
