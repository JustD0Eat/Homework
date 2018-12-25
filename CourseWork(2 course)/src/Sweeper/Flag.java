package Sweeper;

class Flag
{
    private Matrix flagMap;
    private int countOfClosedBoxes;

    void start()
    {
        flagMap = new Matrix(Box.Closed);
        countOfClosedBoxes = Ranges.getSize().x * Ranges.getSize().y;
    }

    Box get(Coord coord)
    {
        return flagMap.get(coord);
    }

    public void setOpenedToBox(Coord coord)
    {
        flagMap.set(coord, Box.Empty);
        countOfClosedBoxes--;
    }

    public void toggleFlagToBox(Coord coord)
    {
        switch(flagMap.get(coord))
        {
            case Flag: setClosedToBox(coord); break;
            case Closed:setFlagToBox(coord); break;
        }
    }

    private void setClosedToBox(Coord coord)
    {
        flagMap.set(coord, Box.Closed);
    }


    private void setFlagToBox(Coord coord)
    {
        flagMap.set(coord, Box.Flag);
    }

    int getCountOfClosedBoxes()
    {
        return countOfClosedBoxes;
    }

    void setBombedToBox(Coord coord)
    {
        flagMap.set(coord, Box.RedBomb);
    }

    void setOpenedToClosedBombBox(Coord coord)
    {
        if(flagMap.get(coord) == Box.Closed)
            flagMap.set(coord, Box.Empty);
    }

    void setNoBombToFlagSafeBox(Coord coord)
    {
        if(flagMap.get(coord) == Box.Flag)
            flagMap.set(coord, Box.NoBomb);
    }

    int getCountOfFlagBoxesAround(Coord coord) {
        int count = 0;
        for(Coord around : Ranges.getCoordsAround(coord))
            if(flagMap.get(around) == Box.Flag)
                count++;
        return count;
    }
}
