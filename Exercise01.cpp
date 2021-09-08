class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setWidth(int wid);
       void setLength(int len);
       void setHeight(int hei);
       int  getHeight();
       int  getLength();
       int  getWidth();
       int calcVolume();
};