class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
      void setLength(int plength);
      void setWidth(int pwidth);
      void setHeight(int pheight);

      int getLength();
      int getWidth();
      int getHeight();
 
      int calcVolume();
};
