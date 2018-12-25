package Sweeper;

public enum Box
{
    Zero,
    Num1,
    Num2,
    Num3,
    Num4,
    Num5,
    Num6,
    Num7,
    Num8,
    Bomb,
    Empty,
    Closed,
    Flag,
    RedBomb,
    NoBomb;

    public Object image;

    Box getNextNumberBox()
    {
        return Box.values()[this.ordinal() + 1];

    }

    int getNumber()
    {
        return this.ordinal();
    }
}
