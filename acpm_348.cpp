#include <iostream>

using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,k1 = 0,k2 = 0,r,b1,b2;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if(x1 > x2){
        r = x1;
        x1 = x2;
        x2 = r;
        r = y1;
        y1 = y2;
        y2 = r;
    }
    if(x3 > x4){
        r = x3;
        x3 = x4;
        x4 = r;
        r = y3;
        y3 = y4;
        y4 = r;
    }
    
    if( ((x1 == x4) and (y1 == y4)) or ((x2 == x3) and (y3 == y2)) ){
        cout << "Yes";
        return 0;
    }
    
    if((x1 > x4) or (x3 > x2) or (y1 > y4) or (y3 > y2)){
        cout << "No";
        return 0;
    }
    
    if(x1 != x2){k1 = (y2-y1)/(x2-x1);}
    if(x3 != x4){k2 = (y4-y3)/(x4-x3);}
    b1 = y1 - (k1 * x1);
    b2 = y3 - (k2 * x3);
    
    if( (k1 == k2) and (b1 != b2)){
        cout << "No";
        return 0;
    }
    
    r=(b1-b2)/(k2-k1);
    if((r <= x2) and (r >= x1) and (r >= x3) and (r <= x4)){
        cout << "Yes";
        return 0;
    }
    
    cout << "No";
    return 0;
}
