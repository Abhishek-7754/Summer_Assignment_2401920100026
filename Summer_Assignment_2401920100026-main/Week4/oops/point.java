class Point
{
    private int x;
    private int y;

    Point()
    {
        x = 0;
        y = 0;
    }

    Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    public void setX(int x)
    {
        this.x = x;
    }

    public void setY(int y)
    {
        this.y = y;
    }

    public void setXY(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    void show()
    {
        System.out.println(x + " " + y);
    }

    public static void main(String args[])
    {
        Point p = new Point();
        p.show();

        Point p2 = new Point(10, 20);
        p2.show();

        p2.setXY(30, 40);
        p2.show();
    }
}