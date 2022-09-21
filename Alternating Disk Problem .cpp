// Nebil Gokdemir
// 886458983
// Project1
/*

 ======================ReamMe========================
When this program iterator alternate disk array there is two possible match from current index and adjacent disk. it is Black and white or Black and Black. For Black and white, we just swaps them,but for Black and Black we find closest white and swaps with current index one. This algorithm has n/2 swaps. Since i made arrat size 10, so there will be 5 swaps
     and complexity is O(n). Further answer of question will be in jpg file
 */

#include <iostream>

using namespace std;
void swapeDisk();


int main(int argc, const char * argv[]) {

    
    int i,count = 0, numMove = 0;
 
       string disk[10] = { "Black", "White", "Black", "White","Black", "White","Black", "White","Black", "White" };
    
    
    cout << " ============ input ===========" << endl;
    
    
    for (int i = 0; i < 10; i++) {
     
        cout << "| " <<  disk[i] << "| " ;
        cout << "" << endl;

    
    }


    
    
    for (i = 0 ; i <=4; i++) {
        
        count = count + 1;
        

            if (disk[i] == "Black" && disk[i + 1] == "White" ){
                
                string temp = "";

                temp = disk[i + 1];
                
                disk[ i  + 1] = disk [i];
                
                disk [i] = temp;
                
                numMove = numMove + 1;
                
   
                
                
            }
        else if(disk[i] == "Black" && disk[i + 1] == "Black"){
        
            
            string temp = "";
            
            temp = disk[count + i] ;
            
            disk[count + i ] = disk[i];
            
            disk[i] = temp;
            numMove = numMove + 1;

            
            

        
            
            }
      
    
        
    }
 
    cout << "================================" << endl;
    cout << ""<< endl;
    
    cout <<"  Black and White disk Swaps " <<numMove << " time" << endl;
    
    cout << ""<< endl;
    cout << "================================" << endl;
    cout << " ============ output ===========" << endl;
    
    
    for (int i = 0; i < 10; i++) {
     
        cout << "| " <<  disk[i] << "| " ;
        cout << "" << endl;
    
    }
    


  //  swapeDisk();
    
    
    return 0;
}




void swapeDisk() {
    
    int i,count = 0, numMove = 0;
 
       string disk[10] = { "Black", "White", "Black", "White","Black", "White","Black", "White","Black", "White" };
    
    
    cout << " ============ input ===========" << endl;
    
    
    for (int i = 0; i < 10; i++) {
     
        cout << "| " <<  disk[i] << "| " ;
        cout << "" << endl;

    
    }


    
    
    for (i = 0 ; i <=4; i++) {
        
        count = count + 1;
        

            if (disk[i] == "Black" && disk[i + 1] == "White" ){
                
                string temp = "";

                temp = disk[i + 1];
                
                disk[ i  + 1] = disk [i];
                
                disk [i] = temp;
                
                numMove = numMove + 1;
                
   
                
                
            }
        else if(disk[i] == "Black" && disk[i + 1] == "Black"){
        
            
            string temp = "";
            
            temp = disk[count + i] ;
            
            disk[count + i ] = disk[i];
            
            disk[i] = temp;
            numMove = numMove + 1;

            
            

        
            
            }
      
    
        
    }
 
    cout << "================================" << endl;
    cout << ""<< endl;
    
    cout <<"  Black and White disk Swaps n / 2 " <<numMove << " time" << endl;
    
    cout << ""<< endl;
    cout << "================================" << endl;
    cout << " ============ output ===========" << endl;
    
    
    for (int i = 0; i < 10; i++) {
     
        cout << "| " <<  disk[i] << "| " ;
        cout << "" << endl;
    
    }
    
    cout << "================================" << endl;
    cout << "All answer will be in jpg file" << endl;
 
    
    
}
    

    
    
    
    
