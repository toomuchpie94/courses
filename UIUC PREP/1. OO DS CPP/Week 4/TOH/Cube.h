class Cube {
    public:
        Cube(double length); //parameterized constructor

        double getLength() const;
        void setLength(double length);

        double getVolume() const;
        double getSurfaceArea() const;

    private:
        double length_;
};
