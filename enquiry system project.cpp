#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main();
void Student();
void main_menu();
void Academics();
void People();
void Central_facility();
void management();

//-------------------------------------------------------------------------------//
class complaint{
public:
	void student();
	void createComplaint();
	void saveComplaint();
			
	complaint(){} //default constructor
			
};
struct info{
	string rollNumber;
	string name;
	string date;
	string complaintDetail;
	
	info *next;
};

info *start = NULL;

//-------------------------------------------------------------------------------//
//*************************sub part of institution**************************

//_________________________Sub function of institute____________________________________________________________________________________//

//****************************1.1.1 about NIT JSR***********************************//
void aboutNitjsr(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    cout<<"\tNational Institute of Technology Jamshedpur (NIT Jamshedpur or NITJSR), is an Institute of National"<<endl; 
    cout<<"\tImportance located at Jamshedpur, Jharkhand, India. Established as a Regional Institute of Technology"<<endl; 
    cout<<"\ton 15 August 1960, it was upgraded to National Institute of Technology (NIT) on 27 December 2002 with"<<endl;
    cout<<"\tthe status of a Deemed University. It is one of the 31 NITs in India, and as such is directly under"<<endl;
    cout<<"\tthe control of the Ministry of Human Resource Development (MHRD). It is the third in the chain of 8"<<endl;
    cout<<"\tNITs established as a part of the Second Five Year Plan (1956–61) by the Government of India."<<endl;
    
    do{
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"Wrong input!"<<endl;
                    cout<<"Please try again"<<endl;
            
        }
    }while(true);
}
//*****************************end********************************************//

//****************************1.1.2 Board of Governers*****************************//
void BoardOfGovt(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    
    cout<<"\tChairman"<<endl<<endl;
	cout<<"\t Prof. Karunesh Kumar Shukla (Acting)"<<endl<<endl;

	cout<<"\tDirector (Ex-Officio) Member"<<endl<<endl;
	cout<<"\t Prof. Karunesh Kumar Shukla"<<endl;
	cout<<"\t Director, National Institute of Technology Jamshedpur"<<endl<<endl;

	cout<<"\tMember (Ex-Officio), MoE, GoI"<<endl<<endl;
	cout<<"\t Smt. Darshana	M. Dabral"<<endl;
	cout<<"\t JS & FA,MoE, GoI"<<endl;
	cout<<"\t Ms. Saumya Gupta"<<endl;
	cout<<"\t J.S. (NIT), MoE, GoI"<<endl<<endl;

	cout<<"\tNominee of the Council of NIT"<<endl<<endl;;
	cout<<"\tNominee of the State Government"<<endl<<endl;
	cout<<"\t Dr. Arun Kumar"<<endl;
	cout<<"\t Director, DHTE & SD"<<endl;
	cout<<"\t Govt. of Jharkhand"<<endl<<endl;

	cout<<"\t Prof. D.K. Singh"<<endl;
	cout<<"\t Director, BIT Sindri"<<endl;
	cout<<"\t Dhanbad Rd, Sindri, Jharkhand"<<endl<<endl;
	
	cout<<"\tMember"<<endl<<endl;
	cout<<"\t Prof. T.N. Singh"<<endl;
	cout<<"\t Director, Indian Institute of Technology Patna"<<endl;
	
	cout<<"\tSenate Nominee"<<endl<<endl;
	cout<<"\t Prof. R.V. Sharma"<<endl;
	
	cout<<"\t Professor"<<endl;
	cout<<"\t Department of Mech. Engg."<<endl;
	cout<<"\t NIT Jamshedpur"<<endl<<endl;
	
	cout<<"\t Dr. Rajiv Bhushan"<<endl;
	cout<<"\t Associate Professor"<<endl;
	cout<<"\t Department of HSSM"<<endl;
	cout<<"\t NIT Jamshedpur"<<endl<<endl;
	
	cout<<"\tSecretary"<<endl;
	cout<<"\t Col. (Dr.) Nisheeth Kumar Rai (Retd.)"<<endl;
	cout<<"\t Registrar"<<endl;
	cout<<"\t NIT Jamshedpur"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"Wrong input!"<<endl;
                    cout<<"Please try again"<<endl;
            
        }
    }while(true);
}
//************************************end**************************************//

//***************************** 1.1.2 finance committee*******************************//
void financeCommittee(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
	cout<<"\tName: ";
	cout<<"Prof.Karunesh Kumar Shukla(Chairman,BOG)"<<endl;
	
	cout<<"\tPost: Acting Chairman"<<endl<<endl;
	
	cout<<"\tName: ";
	cout<<"prof.Karunesh Kumar Shukla(Director)"<<endl;
	
	cout<<"\tPost: Member"<<endl;
	cout<<"\tEmail: director@nitjsr.ac.in"<<endl<<endl;
	
	cout<<"\tName: Ms. Saumya Gupta(J.S., MoE, GoI)"<<endl;
	cout<<"\tPost: Member"<<endl<<endl;
	
	cout<<"\tName: Mrs. Darshana M. Dabral (JS & FA , MoE, GoI)"<<endl;
	cout<<"\tPost: Member"<<endl;
	
	cout<<"\tName: Prof. D.K. Singh (Director, BIT-Sindri)"<<endl;
	cout<<"\tName: Member (BOG Representative)"<<endl<<endl;
	
	cout<<"\tName: Dr. Arun Kumar (GoJ)"<<endl;
	cout<<"\tPost: Member (BOG Representative)"<<endl<<endl;
	
	cout<<"\tName: Col.(Dr.) Nisheeth Kumar Rai (Retd.) Registrar"<<endl;
	cout<<"\tPost: Member Secretary"<<endl;
	cout<<"\tEmail:registrar@nitjsr.ac.in"<<endl<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end**************************************//

//*********************************** 1.1.3 Ranking and recognition*****************//
void rankingAndRecognition(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
	cout<<"\tInstitute Rank :AIR 86 (NIRF 2022)"<<endl<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end**************************************//

//*********************************** 1.1.5  Former Directors************************//
void formerDirectors(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
	cout<<"\tName: 'Prof.A.Mishra'"<<endl;
	cout<<"\tFrom:  27/12/2002"<<endl;
	cout<<"\tTo	 :  30/06/2003"<<endl<<endl;
	
	cout<<"\tName: 'Prof.D.Bhattacharya'"<<endl;
	cout<<"\tFrom:  01/07/2003"<<endl;
	cout<<"\tTo	 :  27/03/2005"<<endl<<endl;
	
	cout<<"\tName: 'Prof.S.K.Mukherjee'"<<endl;
	cout<<"\tFrom:  28/03/2005"<<endl;
	cout<<"\tTo	 :  09/11/2005"<<endl<<endl;
	
	cout<<"\tName: 'Prof.G.Panda'"<<endl;
	cout<<"\tFrom:  10/11/2005"<<endl;
	cout<<"\tTo	 :  14/08/2006"<<endl<<endl;
	
	cout<<"\tName: 'Prof.A.Mishra(I/C)'"<<endl;
	cout<<"\tFrom:  15/08/2006"<<endl;
	cout<<"\tTo	 :  07/06/2008"<<endl<<endl;
	
	cout<<"\tName: 'Prof.S.K.Sarangi(I/C)'"<<endl;
	cout<<"\tFrom:  08/06/2008"<<endl;
	cout<<"\tTo	 :  04/08/2008"<<endl<<endl;
	
	cout<<"\tName: 'Prof.Rajnish Shrivastava'"<<endl;
	cout<<"\tFrom:  05/08/2008"<<endl;
	cout<<"\tTo	 :  02/08/2012"<<endl<<endl;
	
	cout<<"\tName: 'Prof.Rambabu Kodali'"<<endl;
	cout<<"\tFrom:  03/08/2012"<<endl;
	cout<<"\tTo	 :  02/08/2017"<<endl<<endl;
	
	cout<<"\tName: 'Prof.Yamuna Prasad Yadav'"<<endl;
	cout<<"\tFrom:  03/08/2017"<<endl;
	cout<<"\tTo	 :  15/11/2017"<<endl<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end**************************************//

//***********************************end**************************************//
//************************* 1.1.6 How to reach **************************************
void howToReach(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tHow to Reach Jamshedpur"<<endl;
    cout<<"\t_______________________"<<endl<<endl;
    
    cout<<"\tJamshedpur is the first well-planned industrial city of India, founded by the late Jamshedji Nusserwanji Tata and ranks "<<endl;
	cout<<"\t28th among the 35 million-plus cities and is also the 31st urban agglomeration in India according to the census 2001."<<endl;
	cout<<"\tLocated in the East Singhbhum district of Jharkhand on the Chota Nagpur plateau, it is the district headquarters and is "<<endl;
	cout<<"\tsurrounded by the beautiful Dalma Hills. The rivers Subarnarekha and Kharkai border the North and West of the city,"<<endl; 
	cout<<"\trespectively. The institute is located in Adityapur town of the district which is at the border of Saraikela-Kharswan "<<endl;
	cout<<"\tdistrict and East Singhbhum district. Adityapur is a highly industrialized town having hundreds of small and medium scale industries."<<endl<<endl;
	
	cout<<"\tAirways"<<endl;
	cout<<"\t_______"<<endl<<endl;
	
	cout<<"\tBirsa Munda Airport, Ranchi, Jharkhand: is connected with Jamshedpur through NH-33 via Chandil and Bundu. Road distance is "<<endl; 
	cout<<"\tabout 140 KM between the two cities. You may add about 15 KM more to this distance as the Airport is about 5 KM from Ranchi "<<endl;
	cout<<"\tcity and NIT Jamshedpur is about 10 KM from the Jamshedpur bus-stand. Numerous bus services are available between Ranchi and "<<endl;
	cout<<"\tJamshedpur. Ranchi is also connected with Jamshedpur by rail-route distance is 167 KM by train but the bus route is convenient."<<endl<<endl;
	
	cout<<"\tNetaji Subhash Chandra Bose Domestic & International Airport, Kolkata.It is an international airport located in Kolkata, West "<<endl;
	cout<<"\tBengal, India.It is 260km away from Jamshedpur. The best way of travelling between Jamshedpur and Kolkata is by train. The "<<endl; 
	cout<<"\ttrain journey takes 4 - 5 hours.By road it takes about 6 hours."<<endl<<endl;
	
	cout<<"\tRailways"<<endl;
	cout<<"\t________"<<endl<<endl;
	
	cout<<"\tThe railway station of Jamshedpur is known as Tatanagar Junction. Tatanagar (Jamshedpur) is an important railway junction & a "<<endl;
	cout<<"\tmodel station on the South Eastern Railway and is the most important railway junction of the state as it is connected directly "<<endl;
	cout<<"\tto all the major cities of India, viz., Kolkata, Mumbai, Delhi, Chennai, Bangalore, Ahmedabad, Amritsar, Raipur, Patna, Nagpur, "<<endl;
	cout<<"\tKanpur, Ranchi, Pune, Jammu, Vishakapatnam, Guwahati, Bhubaneshwar etc."<<endl<<endl;
	
	cout<<"\tTatanagar Junction is 135 KM from Kharagpur and 250 KM from Howrah (Kolkata) by train route. It is well connected to Kharagpur and "<<endl;
	cout<<"\t HowrahJunctions through over a dozen of super-fast/express/local trains. Jamshedpur is well connected to other parts of India "<<endl; 
	cout<<"\tthrough national and state highways. The major highways are:"<<endl<<endl;
	
	cout<<"\tNational Highway 33 (NH 33) touches the city and joins the NH32, which connects Kolkata with Delhi."<<endl;
	cout<<"\tNational Highway 32 (NH 32) connects Jamshedpur to Govindpur via Dhanbad."<<endl<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
//***********************************end**************************************//

//_________________________________end______________________________________________________________________________________________________//

//_________________________institute_______________________________________________________________________________________________________//
void institute(){
	system("cls");
    do{
    	
    	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    	cout<<"\t\t\t\t_____________________________________________________"<<endl;
        cout<<endl;
        cout<<"\t******INSTITUTE******"<<endl;
        cout<<"\t_____________________"<<endl<<endl;
        cout<<"\t1.About NITJSR"<<endl;
        cout<<"\t2.Board of Governers"<<endl;
        cout<<"\t3.Finance Committee"<<endl;
        cout<<"\t4.Ranking and Recognition"<<endl;
        cout<<"\t5.Former Directors"<<endl;
        cout<<"\t6.How to Reach"<<endl;
        cout<<"\t7.Go to main menu"<<endl;
        cout<<"\t8.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: aboutNitjsr();
                    break;
                    
            case 2: BoardOfGovt();
                    break;
                    
            case 3: financeCommittee();
                    break;
                    
            case 4: rankingAndRecognition();
                    break;
                    
            case 5: formerDirectors();
                    break;
                    
             case 6: howToReach();
                     break;
                    
             case 7: main();
                     break;
            case 8  :  exit(0);  
            default:cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again";
        }
        
    }while(true);
}
//_________________________end___________________________________________________________________________________________________________//

//_________________________Sub function of administration________________________________________________________________________________//

//***********************************visitor**************************************//
void visitor(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
	cout<<"\tShri Ram Nath Kovind"<<endl;
	cout<<"\tHonorable President of India"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end*******************************************//

//***********************************chairman**************************************//
void chairman(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tChairman, BOG"<<endl;
    cout<<"\t Prof. Karunesh Kumar Shukla"<<endl;
	cout<<"\t Acting Chairman";
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end*******************************************//

//***********************************Director**************************************//
void director(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tChairman"<<endl;
    cout<<"\t Prof. Karunesh Kumar Shukla"<<endl;
	cout<<"\t Director"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}

//***********************************end*******************************************//

//**********************************Deputy Director********************************//
void dDirector(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tDeputy director"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//***********************************end*******************************************//

//*********************************Registrar**************************************//
void registrar(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tregistrar"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//******************************end***********************************************//

//*********************************Registrar**************************************//
void deans(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tdeans"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//******************************end********************************************//

//*********************************Associate Deans**************************************//
void adeans(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tAssociate Deans"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//******************************end********************************************//

//*********************************Head of Departments**************************************//
void HOD(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
    
    cout<<"\tHead of Departments"<<endl;
	
	do{
		cout<<endl;
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Exit"<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
                    
            case 2: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
//******************************end********************************************//

//_____________________________________end______________________________________________________________________________________________//

//***************************end part of institution***********************
//_________________________administration_____________________________________//
void administration(){
     do{
     	 system("cls");
		 cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    	 cout<<"\t\t\t\t_____________________________________________________"<<endl<<endl;
         cout<<endl;
         cout<<"\t******ADMINISTRATION******"<<endl;
         cout<<"\t__________________________"<<endl;
         cout<<endl;
         cout<<"\t1.Visitor"<<endl;
         cout<<"\t2.Chairman"<<endl;
         cout<<"\t3.Director"<<endl;
         cout<<"\t4.Deputy Director"<<endl;
         cout<<"\t5.Registrar"<<endl;
         cout<<"\t6.Deans"<<endl;
         cout<<"\t7.Associate Deans"<<endl;
         cout<<"\t8.Head of Departments"<<endl;
         cout<<"\t9.Go to main menu"<<endl;
         cout<<"\t10.Exit"<<endl<<endl;
        
         int choice;
         cout<<endl<<"\tEnter choice:";
         cin>>choice;
         
         switch(choice){
         	case 1:	visitor();
         			break;
         			
         	case 2:	chairman();
         			break;
         			
         	case 3:	director();
         			break;
         			
         	case 4:	dDirector();
         			break;
         			
         	case 5:	registrar();
         			break;
         			
         	case 6:	deans();
         			break;
         			
         	case 7:	adeans();
         			break;
         			
         	case 8:	HOD();
         			break;
         			
         	case 9:	main();
         			break;
         			
         	case 10:exit(0);
         	
         	default: cout<<"\tWrong input!"<<endl;
                     cout<<"\tPlease try again"<<endl;
		 }
     }while(true);
 }

//________________________________end_________________________________________//
	
	//***********************Start Student**************************************
    void Placement(){
	  system("cls");
    cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<endl;
    cout<<"\tNational Institute of Technology Jamshedpur popularly known as NIT Jamshedpur is conducting its placement"<<endl;
	 cout<<"\tdrive for the batch 2022 and the highest CTC stood at INR 57 LPA and average 12 LPA"<<endl;
	 cout<<"\t----------Top Recruities:     Amazon, Deloitte, Tata Power"<<endl;
	 cout<<"\t The institute has so far achieved 91.11% placements A total of 506 students registered for the placement"<<endl;
	  cout<<"\tdrive and till now 461 students have been placed. Around 150 companies participated in the placement"<<endl;
	  cout<<"\t drive till now and another 20 comapnies are expected to turn up in the coming months."<<endl<<endl;
	  cout<<"\t********************Placement details(2021)**********************************************"<<endl;
	  cout<<"\t-----------------------------------------------------------------------------------------"<<endl<<endl;
	  cout<<"\tBRANCH\t\t\tREGISTER STUDENT\tPLACED\t    HIGHEST CTC\t   AVERAGE CTC\t   % PLACEMENT"<<endl;
	  cout<<"\tCSE   \t\t          95       \t\t92      \t57         \t24       \t96.84 "<<endl;
	  cout<<"\tCivil eng   \t          74       \t\t46      \t19         \t09       \t62.16 "<<endl;
	  cout<<"\tElectrical eng            95    \t\t82      \t46         \t13       \t86.31 "<<endl;
	  cout<<"\tElectrical-com            98     \t\t94      \t46         \t18       \t95.92 "<<endl;
	  cout<<"\tMechanical      \t  95     \t\t83      \t13         \t8.7       \t90.22 "<<endl;
	  cout<<"\tproduction       \t  44     \t\t31      \t20         \t8.5       \t70.45 "<<endl;
	  cout<<"\tmetalergy       \t  95     \t\t92      \t57         \t24       \t96.84 "<<endl;
	  cout<<"\tMCA   \t\t          78       \t\t72      \t46         \t12       \t92.30 "<<endl;
	  cout<<endl<<endl;
	    do{
        cout<<"\t1.Go to main menu"<<endl;
        cout<<"\t2.Go to Back"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
            case 2: Student();
			         break;        
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
    	
	}
	void Student_Activities(){
		system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Total Team Available in College_______________"<<endl;
    cout<<endl<<endl;
    cout<<"\t-> Team Revanta"<<endl<<"\t-> nss ,nit jsr"<<endl<<"\t-> Phocus "<<endl<<"\t-> Team phonix "<<endl;
    cout<<"\t-> Civil Engineering society"<<endl;
    cout<<"\t-> QuNITe"<<endl<<"\t-> Rooh "<<endl<<"\t-> Team Rays"<<endl<<"\t-> mechanical Engineering society "<<endl<<"\t-> E-cell"<<endl;
    cout<<"\t-> Innoreva"<<endl<<"\t-> Industry and Alumini relation"<<endl<<"\t-> Electrical Engineering society"<<endl;
    cout<<"\t-> Quod Invicta"<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Student();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
			
	}
	void Student_life(){
		system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"\tAbout"<<endl<<"\t_________"<<endl<<endl;
    cout<<"\tYou have worked hard enough to get in to NIT. Now it is time to easeyour loads, enjoy the reward and involve yourself"<<endl;
    cout<<"\tin interestingactivities to develop your personality and sharpen your skills. There is a whole lot of activities various"<<endl;
    cout<<"\tclubs and teams going on in the institute to keep you busy for the entire year."<<endl<<endl;
    cout<<"\tWe have classes from 8am to 5 pm during weekdays, while weekends are left for you to enjoy , relax and study too!!! "<<endl;
    cout<<"\tIn your first odd semester, by the time you get used to the institute life you will find yourself working alongside "<<endl;
    cout<<"\tdifferent clubs. In the meantime you will be facing tests, assignments, quizzes and the mighty-end sems."<<endl<<endl;
    cout<<"\tBut no need to panic as the time passes so fast that you won’t even realize when your semester is over."<<endl;
    cout<<"\tWhen you come back in even sem you will be watching and taking part in the fests of the institute like sports meet,"<<endl;
	cout<<"\tCulfest and Ojass."<<endl;
	cout<<endl<<endl<<endl;
	cout<<"\tNO RAGGING"<<endl;
	cout<<"\t__________"<<endl<<endl;
	cout<<"\tAnd if you l like going out you can always visit the beautiful city of Jamshedpur. Some of the major tourist attractions of the"<<endl;
	cout<<"\tcity are Jubilee park which was a gift by Tata Steel to the citizens of Jamshedpur on the completion of its 50 years."<<endl;
	cout<<"\tDimna Lake is an artificial reservoir and one of the main sources for the city's drinking water. "<<endl;
	do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Student();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);	
		
	}
    void Student_counselling(){
    	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Student counselling available_______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Student counselling portion here: "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Student();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
    	
    	
	}
    void Health_and_welfare(){
    	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Health and welfare _______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Detail of health care is here: "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Student();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
    	
	}
	void Life_at_nitjsr(){
		system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Life at nitjsr _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Detail of life at nitjsr is here: "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Student();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
		
	}
	void Student(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    
        do{
    	
        cout<<endl;
        cout<<"\t******Student******"<<endl;
        cout<<"\t_____________________"<<endl<<endl;
        cout<<"\t1.Placement"<<endl;
        cout<<"\t2.Student Achievements"<<endl;
        cout<<"\t3.Student Life"<<endl;
        cout<<"\t4.Student Counselling"<<endl;
        cout<<"\t5.Health and Welfare"<<endl;
        cout<<"\t6.Life @NITJSR"<<endl;
        cout<<"\t7.Go to Back"<<endl;
        cout<<"\t8.Go to main menu"<<endl;
        cout<<"\t9.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Placement();
                    break;
                    
            case 2: Student_Activities();
                    break;
                    
             case 3: Student_life();
                    break;
                    
             case 4: Student_counselling();
                     break;
                    
             case 5: Health_and_welfare();
                    break;
                    
            case 6: Life_at_nitjsr();
                    break;
              case 7: main_menu();
			          break;      
              case 8: main();
                     break;
            case 9  :  exit(0);  
            default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again";
        }
        
    }while(true);
}
    
//****************************End Student**********************************
//************************ Start Academic Details:********************************
void Academic(){
		system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Academic _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Detail of Academic details is here: "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Admissions(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Admission _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Admission details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Departments(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Department _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Department details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Curriculum(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Curriculum _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Curriculum details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Fee_Structure(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Fee_structure _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Fee Structure details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Academic_Documents(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Academic Documents: _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Academic Documents details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academics();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
                 //*****Academic main funtion
void Academics(){
	system("cls");
	system("COLOR 25");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    
        do{
    	
        cout<<endl;
        cout<<"\t******Academics******"<<endl;
        cout<<"\t_____________________"<<endl<<endl;
        cout<<"\t1.Academics"<<endl;
        cout<<"\t2.Admissions"<<endl;
        cout<<"\t3.Departments"<<endl;
        cout<<"\t4.Curriculum"<<endl;
        cout<<"\t5.Fee Structure"<<endl;
        cout<<"\t6.Academic Documents"<<endl;
        cout<<"\t7.Go to Back"<<endl;
        cout<<"\t8.Go to main menu"<<endl;
        cout<<"\t9.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Academic();
                    break;
                    
           case 2: Admissions();
                    break;
                    
           case 3: Departments();
                    break;
                    
           case 4: Curriculum();
                     break;
                    
           case 5: Fee_Structure();
                    break;
                    
            case 6: Academic_Documents();
                    break;
              case 7: main_menu();
			          break;      
              case 8: main();
                     break;
            case 9  :  exit(0);  
            default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again";
        }
        
    }while(true);
}
//*************************End****************************************************


//******************************Start people***************************************
void Faculty(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Faculty _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Faculty details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: People();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Administrative_Staff(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Administrative_Staff _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Administrative_Staff details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: People();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
void People(){
	system("cls");
	system("COLOR 25");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    
        do{
    	
        cout<<endl;
        cout<<"\t******People******"<<endl;
        cout<<"\t_____________________"<<endl<<endl;
        cout<<"\t1.Faculty"<<endl;
        cout<<"\t2.Administrative_Staff"<<endl;
        cout<<"\t3.Go to Back"<<endl;
        cout<<"\t4.Go to main menu"<<endl;
        cout<<"\t5.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Faculty();
                    break;
                    
           case 2: Administrative_Staff();
                    break;
                    
         case 3: main_menu();
			          break;      
         case 4:     main();
                     break;
          case 5  :  exit(0);  
        default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again";
        }
        
    }while(true);
}

//******************************End people*****************************************

//****************************** Start Central facility***********************************
void Central_Library(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Central library _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Central library details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Medical_Facilities(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Medical facilities _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    medical facilities details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}
void Computer_Center(){
   system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Computer center _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    computer center details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);	
}
void Safety_and_Security(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Safety_and_Security _______________"<<endl;
    cout<<endl<<endl;
    cout<<"    Safety_and_Security details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
void Guest_House(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Guest House_______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Guest house details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
void Transport(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Transport _______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Transport details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_facility();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}
void Central_facility(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    
        do{
    	
        cout<<endl;
        cout<<"\t******Central facility******"<<endl;
        cout<<"\t_____________________"<<endl<<endl;
        cout<<"\t1.Central Library"<<endl;
        cout<<"\t2.Medical Facilities"<<endl;
        cout<<"\t3.Computer Center"<<endl;
        cout<<"\t4.Safety and Security"<<endl;
        cout<<"\t5.Guest House"<<endl;
        cout<<"\t6.Transport"<<endl;
        cout<<"\t7.Go to Back"<<endl;
        cout<<"\t8.Go to main menu"<<endl;
        cout<<"\t9.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: Central_Library();
                    break;
                    
           case 2: Medical_Facilities();
                    break;
                    
           case 3: Computer_Center();
                    break;
                    
           case 4: Safety_and_Security();
                     break;
                    
           case 5: Guest_House();
                    break;
                    
            case 6: Transport();
                    break;
              case 7: main_menu();
			          break;      
              case 8: main();
                     break;
            case 9  :  exit(0);  
            default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again";
        }
        
    }while(true);
}

//*****************************End Central facility*****************************************

//*****************************Start Recruitment*********************************************
void Recruitments(){
system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Recruitment _______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Recuritment details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main_menu();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
	
}

//*****************************End Recruitment***********************************************
//*****************************Start Research and Development*********************************

//******************************End Research and Development*********************************
void Research_and_Development(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Research and Development _______________"<<endl;
    cout<<endl<<endl;
    cout<<"   Research and Development details is here : "<<endl<<endl<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main_menu();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
}


//*******************************Start main menu***********************************************
void main_menu(){
	
	   system("cls");
    cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    do{
        cout<<endl;
        cout<<"\t******MENU******"<<endl;
        cout<<"\t__________________"<<endl<<endl;
        cout<<"\t1.Institute"<<endl;
        cout<<"\t2.Administration"<<endl;
        cout<<"\t3.Academics"<<endl;
        cout<<"\t4.Students"<<endl;
        cout<<"\t5.People"<<endl;
        cout<<"\t6.Central Facilities"<<endl;
        cout<<"\t7.Recruitments"<<endl;
        cout<<"\t8.Research and Development"<<endl;
        cout<<"\t9.Go to main menu"<<endl;
        cout<<"\t10.Exit"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        
        switch(choice){
            case 1: institute();
                    break;
            case 2: administration();
                    break;
            case 3: Academics();
                    break;
            // case 2: main();
            //         break;
            case 4 : Student();
                    break;
            case 5 : People();
                     break;
            case 6: Central_facility();
                    break;
            case 7: Recruitments();
                    break;
            case 8: Research_and_Development();
                    break;
            case 9: main();
                    break;
            case 13: exit(0);
            default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again"<<endl;
        }
    }while(true);    
}
//**********************End main menu********************************//
//*********************start management******************************//
void complaintS(){
	complaint comp;
	system("COLOR 80");
	
	int choice;
	
	do{
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________MANAGEMENT _______________"<<endl;
    cout<<endl<<endl;
		
		cout<<"\t\t1.Student\n";
		cout<<"\t\t2.Goto main\n";
		cout<<"\t\t3.Quite\n\n";
		
		cout<<"\t\tEnter choice:";
		cin>>choice;
		
		switch(choice){
			
			case 1: 
				comp.student();
				break;
				
			case 2:
				main();
				break;
				
			case 3:
				cout<<"\t\tThank you\n";
				exit(0);
		}
	}while(choice !=3);
}

void complaint::student(){
	
	complaint comp;
	int choice;
	string userName;
	int pass;
	
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________MANAGEMENT _______________"<<endl;
    cout<<endl<<endl;
	
	cout<<"\t\t------------------------------------------\n";
	cout<<"\t\tStudent login\n";
	cout<<"\t\t------------------------------------------\n\n";
	
	cout<<"\t\tEnter username:";
	cin>>userName;
	cout<<endl;
	cout<<"\t\tEnter password:";
	cin>>pass;
	cout<<endl;
	
	if(userName == "jsrstudent" && pass == 123){
		
		do{
		
			
			cout<<"\t\t1.Create Complaint\n";
			cout<<"\t\t2.Save complaint\n";
//			cout<<"\t\t3.Delete complaint\n";
			cout<<"\t\t3.Log out\n";
			cout<<"\t\t4.main menu\n";
			cout<<"\t\t5.Exit\n\n";
			
			cout<<"\t\tEnter choice:";
			cin>>choice;
			
			switch(choice){
				case 1:
					comp.createComplaint();
					break;
				
				case 2:
					comp.saveComplaint();
					break;
					
				case 3:
					cout<<"\t\tYou are logged out\n\n";
					system("PAUSE");
					comp.student();
					break;
				case 4: main();
				        break;
					
				case 5:
					exit(0);
					
				default:
					cout<<"\t\tWrong input!\n";
			}
			
		}while(choice != 4);
	}
	else{
		cout<<"\t\tWrong username and password!\n"<<'\n';
		system("PAUSE");
		system("cls");
		comp.student();
		
	}
}

void complaint::createComplaint(){
	
	system("cls");
	cout<<"\t\t==========================================\n";
	cout<<"\t\t|	NIT JAMSHEDPUR Complaint Portal	 |\n";
	cout<<"\t\t==========================================\n\n";
	
	cout<<"\t\t------------------------------------------\n";
	cout<<"\t\tAdd complaint\n";
	cout<<"\t\t------------------------------------------\n";
	
	info *data;
	data = new info;
	
	cout<<"\t\tEnter roll number:";
	cin>>data->rollNumber;
	
	cout<<"\t\tEnter name of the student:";
	//cin>>data->name;
	cin.ignore();
	getline(cin, data->name);
	
	cout<<"\t\tEnter date:";
	cin>>data->date;
	
	cout<<endl;
	
	cout<<"\t\t-------------------------------------------\n";
	cout<<"\t\tWrite your complaint below\n";
	cout<<"\t\t-------------------------------------------\n\n";
	
	cout<<"\t\t";
	fflush(stdin);
	getline(cin,data->complaintDetail);
	
	cout<<endl;
	cout<<"\t\t===========================================\n";
	cout<<"\t\tComplaint added successfully\n";
	cout<<"\t\t===========================================\n";
	
	system("PAUSE");
	
	data->next = NULL;
	if(start != NULL){
		data->next = start;
	}
	start = data;
	system("cls");
	
}

void complaint::saveComplaint(){
	string rollNumber;
	bool find = false;
	
	system("cls");
	
	ofstream fout;
	fout.open("ComplaintList.txt",std::ios_base::app);
	
	info *temp = start;
	
	cout<<"\t\t==========================================\n";
	cout<<"\t\t|	NIT JAMSHEDPUR Complaint Portal	 |\n";
	cout<<"\t\t==========================================\n\n";
	
//	fout<<"\t\t==========================================\n";
//	fout<<"\t\t|	NIT JAMSHEDPUR Complaint Portal	 |\n";
//	fout<<"\t\t==========================================\n\n";
	
	cout<<"\t\tEnter roll number:";
	cin>>rollNumber;
	
	cout<<"\t\t------------------------------------------\n";
	cout<<"\t\tComplaint list\n";
	cout<<"\t\t------------------------------------------\n";
	
	fout<<"\t\t------------------------------------------\n";
//	fout<<"\t\tComplaint list\n";
//	fout<<"\t\t------------------------------------------\n";
	
	if(temp == NULL){
		cout<<"No complaint here!";
		fout<<"No complaint here!";
		system("PAUSE");
	}
	
	while(temp != NULL && find == false){
		
		if(temp->rollNumber == rollNumber){
			find = true;
		}
		else{
			temp = temp -> next; 
		}
				
				
		if(find == true){
			cout<<"\t\tRoll number is: "<<temp->rollNumber<<endl;
			cout<<"\t\tStudent name is: "<<temp->name<<endl;
			cout<<"\t\tComplaint date is: "<<temp->date<<endl;
			
			fout<<"\t\tRoll number is: "<<temp->rollNumber<<endl;
			fout<<"\t\tStudent name is: "<<temp->name<<endl;
			fout<<"\t\tComplaint date is: "<<temp->date<<endl;
			
			cout<<"\t\t-----------------------------------\n";
			cout<<"\t\tComplaint explaination:"<<endl;
			
			fout<<"\t\t-----------------------------------\n";
			fout<<"\t\tComplaint explaination:"<<endl;
			
			cout<<"\t\t";
			cout<<temp->complaintDetail<<endl;
			
			fout<<"\t\t";
			fout<<temp->complaintDetail<<endl;
			
			cout<<"\t\t-----------------------------------\n";
			
			fout<<"\t\t-----------------------------------\n";
			
			system("PAUSE");
		}
	}
	
	fout.close();
	management();
}
void management(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________MANAGEMENT _______________"<<endl;
    cout<<endl<<endl;
	do{
	    
	   
	    cout<<"\t1.Complaint"<<endl<<endl;
	    cout<<"\t2.Go to main menu"<<endl<<endl<<endl;
	    
	    int choice;
	    cout<<"Enter choice:"<<endl;
	    cin>>choice;
	    
	    switch(choice){
	    	case 1:
	    		complaintS();
	    		break;
	    		
	    	case 2:
	    		main();
	    		break;
	    		
	    	default:
	    		cout<<"Wrong input!";
		}
	}while(true);
}
//*********************end management*******************************//

//********************total complain*******************************//
void totalComplains(){
	system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________TOTAL COMPLAIN _______________"<<endl;
    cout<<endl<<endl;
	string str;
	ifstream fin;
	fin.open("complaintList.txt");
	if(fin){
		ostringstream ss;
		ss<<fin.rdbuf();
		str = ss.str();
	}
	cout<<str;
	fin.close();
	system("PAUSE");
	system("cls");
	main();
	
}
//********************end total complain***************************//

//********************Start notice_annoucement **********************
void notice_annoucement(){
system("cls");
	cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    cout<<endl<<"________________Notic and annoucement _______________"<<endl;
    cout<<endl<<endl;
    cout<<" 1.NOTICE-072022 Notification- Advertisement for recruitment of Assistant Professor 2022. "<<endl<<endl;
    cout<<" 2.NOTICE-2127-2022 Regarding 'Written Test - Technical and Administrative Posts, dt: 18-05-2022"<<endl<<endl;
    cout<<" 3.NOTICE-126-2022 The walk-in interview for recruitment of Medical Officer ( on contract) rescheduled on 28-05-2022."<<endl<<endl;
    cout<<" 4.NOTICE-125-2022 Workshop on Recent Advances in Modelling of Materials- Part 2 at NIT Jamshedpur."<<endl<<endl;
    cout<<" 5.NOTICE-124-2022 Regarding written test- technical and administrative posts"<<endl<<endl;
    cout<<" 6.NOTICE-123-2022 List of Written Test - Technical and Administrative Posts Question and Answer Papers"<<endl<<endl;
    cout<<"\n SHOW MOERE->"<<endl;
    do{
        cout<<endl<<endl<<"\t1.Go to Back "<<endl;
        cout<<"\t2.Go to main menu"<<endl;
        cout<<"\t3.Exit"<<endl;
        int choice;
        cout<<"\tEnter choice:";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1: main();
                    break;
            case 2:
                     main();
                    break;
			                
                    
            case 3: exit(0);
            
            default: cout<<"\tWrong input!"<<endl;
                    cout<<"\tPlease try again"<<endl;
            
        }
    }while(true);
		
	
}
//*********************End notice_annoucement ***********************

//********************main funtion**********************************
int main(){
    system("cls");
    system("COLOR C");
    cout<<"\n\t\t\t\t*****NATIONAL INSTITUTE OF TECHNOLOGY JAMSHEDPUR*****\n";
    cout<<"\t\t\t\t_____________________________________________________"<<endl;
    do{
        cout<<endl<<"\t1.MENU"<<endl;
        cout<<"\t2.NOTICE AND ANNOUNCEMENT"<<endl;
        cout<<"\t3.MANAGEMENT"<<endl;
        cout<<"\t4.TOTAL COMPLAIN"<<endl;
        cout<<"\t5.EXIT"<<endl<<endl;
        
        int choice;
        cout<<"\tEnter choice : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {           
                    
            case 1:   system("cls");
			         main_menu();
                    break;
                    
             case 2: notice_annoucement();
                     break;
                    
            case 3: management();
                    break;
                    
            case 4: totalComplains();
                     break;
                    
            case 5: exit(0);
                    
            default:cout<<"Wrong input!"<<endl;
                    cout<<"Please try again"<<endl;
        }   
    }while(true);
    return 0;
}
