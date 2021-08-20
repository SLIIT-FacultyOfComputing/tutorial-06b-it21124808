//class definition
class Box{
   //declaring properties inside the class
    private:
        int length;
        int width;
        int height;

    //declaring functions inside the class
    public:
        void setLength(int l);
        void setWidth(int w);
        void setHeight(int h);
        int getLength();
        int getWidth();
        int getHeight();
        int calcVolume();

}; //end of the class