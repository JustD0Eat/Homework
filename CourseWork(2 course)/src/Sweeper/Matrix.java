package Sweeper;

class Matrix
{
    private Box [] [] map;

    Matrix(Box defaultBox)
    {
        map = new Box[Ranges.getSize().x][Ranges.getSize().y];
        for(Coord coord : Ranges.getAllCoords())
            map [coord.x] [coord.y] = defaultBox;
    }

    Box get (Coord coord)
    {
        if(Ranges.inRange(coord))
            return map [coord.x] [coord.y];
        return null;
    }

    void set (Coord coord, Box box)
    {
        if(Ranges.inRange(coord))
            map [coord.x] [coord.y] = box;
    }
}

