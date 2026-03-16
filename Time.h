struct Time{
    int h,m,s;
};
void getTime (struct Time &t);
struct Time subtract (struct Time ,struct Time );
void display (struct Time );

//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions

void getTime (struct Time &t){
    cout<<"Input Time(H M S) : ";
    cin>>t.h>>t.m>>t.s;
}

struct Time subtract (struct Time t2,struct Time t1){
    struct Time t3;
    if((t2.s-t1.s)<0){
        --t2.m;
        t3.s = (t2.s-t1.s)+60;
    }
    else t3.s = t2.s-t1.s;

    if((t2.m-t1.m)<0){
        --t2.h;
        t3.m = (t2.m-t1.m)+60;
    }
    else t3.m = t2.m-t1.m;

    if((t2.h-t1.h)<0){
        t3.h = (t2.h-t1.h)+24;
    }
    else t3.h = t2.h-t1.h;

    return t3;
}

void display (struct Time t){
    cout<<setfill('0')<<setw(2)<<t.h<<":"<<setfill('0')<<setw(2)<<t.m<<":"<<setfill('0')<<setw(2)<<t.s;
}