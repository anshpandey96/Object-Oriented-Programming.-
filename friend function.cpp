  #include<iostream>
  using namespace std;
  class Complex
  {
  private :
    int real,img;
  public:

    Complex()
    {

        real=img=0;
    }
    void input ()
    {

        cout<<"Enter thew real or imaginary part :";
        cin>>real>>img;

    }
    void show()
    {
        cout<<"Complex No.is "<<real<<"+i"<<img<<endl;

    }
    friend Complex add(Complex,Complex);

  };

Complex add(Complex x,Complex y)
  {

      Complex z;
      z.real=x.real + y.real;
      z.img= x.img + y.img;
      return z;
  }
  int main()
  {

      Complex a,b,c;
      a.input();
      b.input();
      c.add(a,b);
      a.show();
      b.show();
      C.show();

  }
