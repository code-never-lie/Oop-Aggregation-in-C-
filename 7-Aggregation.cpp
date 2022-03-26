 Aggregation
- Special Type of Association
- "has a " weak Relationship
- May or may not have  relationship

      Composition                      Aggregation
       must have                        may have
       total Participation        Partial Participation


UML Diagram (See on Board)
Composition 
- Filled Diamond
Aggregation
- Hollow Diamond

e.g.
 Car must have engine, tyre and Body
 Car may have Ac

class Engine{
public :
    Engine() {
        cout<<"Engine created"<<endl;
    }
  void start() {
   cout<<"Engine Started 800 hrspower"<<endl;
  }

};
class Tyre{
public :
    Tyre() {
        cout<<"Tyre  created"<<endl;
    }
  void size() {
   cout<<"Tyre Size is 14 inch"<<endl;
  }

};
class Body{
public :
    Body() {
        cout<<"Body  created"<<endl;
    }
  void type() {
cout<<"Body type is saloon color is white"<<endl;
  }

};
class Ac{
public :
    Ac() {
        cout<<"Ac  created"<<endl;
    }
  void cooling() {
cout<<"Super COOL "<<endl;
  }

};

class Car {
private:
Engine e;
Body b;
Tyre t;
Ac   *ac;
public :
  Car () { ac=NULL;
   cout<<"Car  created with out Ac"<<endl;
 }
 Car (bool p) {
      if (p==true)
          ac=new Ac();
   cout<<"Car  created with  Ac"<<endl;
 } 
void printSpecification(){
   e.start();
   b.type();
   t.size();
   if (ac!=NULL)
       ac->cooling();
}
};

void main () {
Car c1;
c1.printSpecification();
cout<<"\n........................\n";
Car c2(true);
c2.printSpecification();

}
......................................................
e.g.  Tea
A tea must have Milk, Water and Teabag
A tea may or may not have suger

...................................................... 
    
e.g                Aggregation with Data members

 A Computer composed of Disk, RAM  and processor
 A computer may have Speaker
 
computer (Brand,price)
disk(brand,size)
RAM(size)
processor(type,clockSpeed)
Speaker (power)

class Disk{
private:
 char brand[30];
 int size;
public:
   Disk() { }
   Disk (char b[],int s) {
     cout<<" Disk Create "<<endl;
      strcpy(brand,b);
      size=s;
   }
 void setBrand(char b[]) { strcpy(brand,b);}
 void setSize(int s) { size=s;}
 char * getBrand() { return brand;}
 int getSize()  { return size;}
};
class RAM{
private:
 
 int size;
public:
   RAM() { }
   RAM (int s) {
      cout<<" RAM Create "<<endl;
      size=s;
   }
 
 void setSize(int s) { size=s;}
 
 int getSize()  { return size;}
};

class Processor{
private:
 char type[30];
 int clockSpeed;
public:
   Processor() { }
   Processor (char b[],int s) {
     cout<<" Processor Create "<<endl;
      strcpy(type,b);
      clockSpeed=s;
   }
 void setType(char b[]) { strcpy(type,b);}
 void setClockSpeed(int s) { clockSpeed=s;}
 char * getType() { return type;}
 int getClockSpeed()  { return clockSpeed;}
};
class Speaker{
private:
 
 int power;
public:
   Speaker() { }
   Speaker(int s) {
      cout<<" Speaker Created "<<endl;
      power=s;
   }
 
 void setPower(int s) { power=s;}
 
 int getPower()  { return power;}
};

class Computer{
private:
char brand[20];
int price;
Disk disk;
Processor processor;
RAM ram;
Speaker *speaker;
public :
      Computer( )  { speaker=NULL;}
      Computer (char cbrand[],int pr,char dbrand[], int dsize,char ptype[], int cspeed,int rsize,bool spFlag,int power=0)
:disk(dbrand,dsize),processor(ptype,cspeed),
ram(rsize)
// constructor initialization list
{ cout<<" Computer Created "<<endl;
  if (spFlag==true){
       speaker=new Speaker(power);
       cout<<" Computer Created with Speakers"<<endl;
  }
  strcpy(brand,cbrand);
  price=pr;

}
void setSpecification(char cbrand[],int pr,char dbrand[], int dsize,char ptype[], int cspeed,int rsize)
{strcpy(brand,cbrand);
  price=pr;
 disk.setBrand(dbrand);
 disk.setSize(dsize);
 processor.setType(ptype);
 processor.setClockSpeed(cspeed);
 ram.setSize(rsize);

}
void printSpecification(){
  cout<<"Computer Brand="<<brand<<endl;
  cout<<"Computer Price="<<price<<endl;
  cout<<"Computer Disk Brand="<<disk.getBrand()<<endl;
  cout<<"Computer Disk Size="<<disk.getSize()<<endl;
  cout<<"Computer Processor Type="<<processor.getType()<<endl;
cout<<"Computer Processor ClockSpeed="<<processor.getClockSpeed()<<endl;
cout<<"Computer RAM Size="<<ram.getSize()<<endl;
if (speaker!=NULL)
   cout<<"Speaker Power ="<<speaker->getPower();
}

};
void main(){
Computer c("compaq",25000,"cgate",500,"core i7",300,10,true,300);

}
..........................................................








