#include <String>
#include <iostream>
using namespace std;

class Author{
    private:
    int authid;
    string authname;
    string bname;
    int nob_publish;
    int sold;

    public:
    Author(){}

    Author(int id,string name, string bname,int publish,int sold){
        this->authid=id;
        this->authname=name;
        this->bname=bname;
        this->nob_publish=publish;
        this->sold=sold;
    }

    int getid(){
        return this->authid;
    }

    string getname(){
        return authname;
    }

    string getbname(){
        return bname;
    }

    int getpublish(){
        return nob_publish;
    }

    int getsold(){
        return sold;
    }

    int available_book(){
        return nob_publish-sold;
    }

}
;
