
 
#include<iostream>
using namespace std;
 char Repeat;
int main()
{
//Habibullahbalti………………………………....
	do
	{
	
	
	int Choice,ADDER,SUBTRACTOR,DECODER;
	int x,y,z,sum,carry,borrow,sub;
	cout<<"Choose Option for the Program"<<endl;
	cout<<"Enter  1 for Adder \n"<<"Enter  2 for Subtractor \n"<<"Enter  3 for Decoder "<<endl;
	cin>>Choice;
	switch(Choice)
	{
		case 1 : 
		         
		          do
				  {
				  //For Adder...........................
				  
		          cout<<"Press 1 for 2 Bit Adder \n Press 2 for 3 Bit Adder "<<endl;
		          cin>>ADDER;
		          if(ADDER==1)
		          {
		          	cout<<"Please Enter the value  X in 0 1 form : "<<endl;
		          	cin>>x;
		          	cout<<"Please Enter the value  Y in 0 1 form : "<<endl;
		          	cin>>y;
		          	if ( x==0|x==1|y==0|y==1)
		          	{
					  sum=x^y;
		          	carry=x&y;
		          	cout<<"Carry         Sum\n"<<carry<<"         "<<sum; 
					  }
		          	else
					   {
					   	cout<<"Please enter valid Input"<<endl;
					  }
				  }
			      else 
			      {
			      cout<<"Enter the velue of X in 0 1 form : "<<endl;
				  cin>>x;
				  cout<<"Enter the value of Y in 0 1 form : "<<endl;
				  cin>>y;
				  cout<<"Enter the value of Z in 0 1 form : "<<endl;
				  cin>>z;
				 
				 if(x==0|x==1|y==0|y==1|z==0|z==1)
				  {
				  sum=z^(x^y);
				  carry=x&y|y&z|x&z;
				  cout<<"Carry    Sum\n"<<carry<<"         "<<sum;
				  }
				  else 
				  {
				  	cout<<"Please enter valid number "<<endl;
				  }
				  }
				
				   cout<<"\nDo u want to Continue Adder again y/n "<<endl;
				  cin>>Repeat;
				 system("cls");
				  }
				  while(Repeat=='y');
				  break;
				  
				  //For Subtractor...................................
				  
			case 2 : 
			      do
			      {
				  cout<<"Press 1 for 2 Bit Subtractor \nPress 2 for 3 Bit Subtractor "<<endl;
		          cin>>SUBTRACTOR;
		          if(SUBTRACTOR==1)
		          {
		           cout<<"Please Enter the value of X in 0 1 form : "<<endl;
		           cin>>x;
		           cout<<"Please Enter the value of Y in 0 1 form : "<<endl;
		           cin>>y;
		           if(x==0|x==1|y==0|y==1)
		           {
		           sub=x^y;
		           x=not(x);
		           borrow=x&y;
		           cout<<"Borrow    Sub\n"<<borrow<<"         "<<sub;}
		           else 
		           {
		           	cout<<"Please enter valid number  "<<endl;
				   }
				  }
			      else
			      {
			       cout<<"Please Enter the value of X in 0 1 form : "<<endl;
			       cin>>x;
			       cout<<"Please Enter the value of Y in 0 1 form : "<<endl;
			       cin>>y;
			       cout<<"Please Enter the value of Z in 0 1 form : "<<endl;
			       cin>>z;
			       if(x==0|x==1|y==0|y==1|z==0|z==1)
			       {
			       sub=z^(x^y);
			       x=not(x);
			       borrow=x&y|y&z|x&z;
			       cout<<"Borrow    Sub\n"<<borrow<<"         "<<sub;
				   }
			       else 
			       {
			       	cout<<"Please Enter Valid number  "<<endl;
				   }
				  }
				  cout<<"Do u want to Continue Subtractor again y/n "<<endl;
				  cin>>Repeat;
				  system("cls");
				 
				  }
				  while(Repeat=='y');
				break;
				
				//For Decoder................................................
				
				case 3 :
				do
				{					   
			        	cout<<"Please Enter the value of X in 0 1 form : "<<endl;
                        cin>>x;
                        cout<<"Please Enter the value of Y in 0 1 form : "<<endl;
                        cin>>y;
                        cout<<"Please Enter the value of Z in 0 1 form : "<<endl;
                        cin>>z;
                         if(x==0|x==1|y==0|y==1|z==0|z==1)
                         {
                         	int choice,A0,A1,A2,A3,A4,A5,A6,A7;
					
                        cout<<"Please Enter the value you need : A"<<endl;
                        cin>>choice;
                        switch(choice)
                        {
                        	case 1 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"1   0   0   0   0   0   0   0";
                                	break;
                        	case 2 :  cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   1   0   0   0   0   0   0";
                                	break;
                        	case 3:   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   1   0   0   0   0   0";
                                	break;
   	                     	case 4 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   0   1   0   0   0   0";
 	                            	break;
   	                    	case 5 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   0   0   1   0   0   0";
   	                             	break;
                           	case 6 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   0   0   0   1   0   0";
   	                            	break;
                        	case 7 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   0   0   0   0   1   0";
                                 	break;
                         	case 8 :   cout<<"A0  A1  A2  A3  A4  A5  A6  A7\n"<<"0   0   0   0   0   0   0   1"<<endl;
                                 	break;	
                                       	default :
										    cout<<"Please enter valid number "<<endl;
                      	}
						  }
						  else 
						  {
						  		cout<<"Please enter valid number  "<<endl;
						  		
						  }
						  cout<<"Do u want to Continue Decoder again y/n "<<endl;
				  cin>>Repeat;
				 
				  }
				  while(Repeat=='y');
				      }	cout<<"Do u want to Repeat this program again from Beginning y/n"<<endl;
					  cin>>Repeat;
					  system(" cls");
					  		     
	}while(Repeat=='y');
	
return 0;	
}

 

