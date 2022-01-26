#include <iostream> 
using namespace std; 
// class induk
class BangunRuang { 
    private: 
    int luas; 
    public: 
    int getluas()
        { 
          return this -> luas;
        } 
    void setluas(int luas){
    this->luas=luas;
        }
    
    private:
        int volume;
        public:
        int getvolume()
        {
            return this -> volume;
        }
        void setvolume(int volume){
            this->volume=volume;
        
}
    }; 
// class turunan 
class kubus: public BangunRuang { 
    private:
    int sisi;
    int volume;
    public: 
    void getdata(){ 
        cout<<"Diketahui sisi : ";
        cin>>this->sisi;
        setluas(sisi*sisi);
        setvolume(sisi*sisi*sisi);
        } 
    }; 

// program utama 
int main () 
    { 
    kubus a; 
    printf("Ditanya :\nLuas Bujursangkar \nVolume Kubus \n");
    a.getdata();
    cout<<"\nLuas Bujursangkar : " <<a.getluas()<<endl;
    cout<<"Volume Kubus : " <<a.getvolume()<<endl;
    return 0; 
    }