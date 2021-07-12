
                           //##########   MATRIX   ##########//


#include"matrix.hpp"
using namespace std;
void mat(){
	int a;
	cout<<"insert size is matrix";
	cin>>a;
	int matrix [a][a];
	cout<<"insert number"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){    //######stacvac tarer@ avelacnel matrixsum######//
			int b;
			cin>>b;
			matrix[i][j]=b;
		}
	}
	int gumar=0;
	for(int i=0;i<a;i++){           //######gtnel ankyunagci tak gtnvox tareri gumar@######//
		for (int j=0;j<i;j++){
		gumar +=matrix[i][j];
		}
	}
	int gumar1=0;
	for(int i=0;i<a;i++){           //######gtnel ankyunagci verev gtnvox tareri gumar@######//
		for (int j=0;j<a;j++){
			gumar1 +=matrix[i][j];
		}
	}
	for(int i=0;i<a;i++){           //######verevi tarer@ poxel iranc gumari binar arjeqov######//
		for(int j=i+1;j<a;j++){
			vector<int>q=erkuakan(gumar);
			if (gumar<2){
		matrix[i][j]=gumar;
	break;
			}else{
		matrix[i][i]=q[j];
			}}}
	for (int i=0; i<a;i++){         //######nerqevi tareri poxel iranc gumari binar arjeqov######//
		for(int j=0;j<i;j++){
	vector<int> w=erkuakan(gumar1);
		if(gumar1<1){
		matrix[i][j]=gumar1;
	break;
			}else{
		matrix[i][j]=w[j];
			}
		}
	}
for(int i=0;i<a;i++){                  //######tpel verjnakan arjeq@######//
	for(int j=0;j<a;j++){
		cout<<matrix[i][j]<<",";
		}
	cout<<endl;
	}
}

                           //##########   TANK   EOU   ##########//
