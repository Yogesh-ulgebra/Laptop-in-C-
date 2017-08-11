#include <iostream>
#include <string>

using namespace std;

class laptop {
	
				
			public:
				
					
			/* Laptop  on mode */			
				void laptop_mode(){
						
						
						cout << "\n \n" ;
						cout << " Laptop mode is " ;
					    cin >> l_mode ;
					    if( l_mode == "on" || l_mode == "off" ){
								 
								 system("cls");
								 cout << "\n \n" ;
					             cout << " laptop is " << l_mode << "\n" "\n" ;
					             l_mode = l_mode ;
					             
				            }
				            else{
				            	system("cls");
				            	cout << "\n \n" ;
						        cout << " please ON or OFF . " << "\n" "\n" ; 
						        laptop_mode();
				            }
						
				}
				
				/* laptop shutdown ( off mode ) */	
				void shutdown(){
						
						
						cout << "\n \n" ;
					    if( l_mode == "on" ){
								 
								// system("cls") ;
								 cout << "\n \n" ;
					             cout << " laptop is shutting down ... "<< "\n" "\n" ;
					             l_mode = " off " ;
					             
				            }
				            else{
				            	
				            	system("cls");
				            	cout << "\n \n" ;
						        cout << " first you laptop ON . " << "\n" "\n" ; 
						        
				            }
						
				}
				
				private:
					
				/* Laptop details initialised */
				int storage = 100 ;
				int ram = 2 ;
				string brand = "YOGA" ;
				string processor = "yogame" ;
				double mac_id = 91.343 ;
				string charge = " pluged out " ;
				string l_mode ;
				string log_in = "logouted" ;
				
				/* System details initialised */
					string WiFi = "on" ;
					string statuss = " do set please " ;
					string os = "WINDOWS" ;
					string username = "yogame" ;
					
				/* first time battery */	
					int battry  = 100 ;
					
				/* additional system details  */	
				int ram_used = 0 ;
				string chge = "pluged" ;
				int storaged = 0 ;
						
				
				public:
					
				/* Laptop details */	
				void laptopdetail(){
					
					storage ;
				    ram ;
				    brand ;
				    processor ;
				    mac_id ;
					cout << "\n \n" << " LapTop details : \n \n" ;
					getlaptopdetails();
					
				}
				/* Laptop details in cin */
				void setlaptopdetails(){
					cout << "\n \n" << " Set LapTop details : \n \n" ;
					cout << " laptop Brand : " ;
					cin >> brand ;
				   	cout << " laptop ram ( int* ) : " ;
					cin >> ram ;
				   	cout << " laptop storage ( int* ) : " ;
					cin >> storage ;
				   	cout << " laptop processor " ;
					cin >> processor ;
				   	cout << " laptop mac_id ( float* ) : " ;
					cin >> mac_id ;
					system ("cls") ;
					cout << "\n \n" << " Seted LapTop details : \n \n" ;
					getlaptopdetails();
				}
				/* Laptop details in cout */
				void getlaptopdetails(){
					
				   					cout << " laptop Brand " << brand << "\n" ;
				   					cout << " laptop ram " << ram << " GB" << "\n" ;
				   					cout << " laptop storage " << storage << " GB" << "\n" ;
				   					cout << " laptop processor " << processor << "\n" ;
				   					cout << " laptop mac_id " << mac_id << ".89.888.12" << "\n" "\n" ;
					
				}
				
				
				/* System details */
				void laptopinside(){
					
					os ;
					username ;
					WiFi ;
					statuss ;
					
					cout << "\n \n" << " System Details : \n \n" ;
					getlaptopinsides();
					
				}
				
				/* System details in cin */
				void setlaptopinsides(){
					
										
					cout << "\n \n" << " Set System Details : \n \n" ;
					cout << " laptop OS " ;
					cin >> os ;
				   	cout << " system username " ;
					cin >> username ;
				   	cout << " WiFi status " ;
					cin >> WiFi ;
				   	cout << " My status " ;
					cin >> statuss ;
					system ("cls") ;
					cout << "\n \n" << " Seted System Details : \n \n" ;
					getlaptopinsides();
					
				}	
				
				/* System details in cout */
				void getlaptopinsides(){
					
				   					cout << " laptop OS " << os << "\n" ;
				   					cout << " system username " << username << "\n" ;
				   					cout << " WiFi status " << WiFi << "\n" ;
				   					cout << " My status " << "\"" << statuss << "\"" << "\n" "\n" ;
					
				}
				
				
				/* system login in laptop */	
				void login(){
					
					username ;
					string u_name ;
					string password ;
					if ( l_mode == "on" ){
						
					cout << "\n \n" ;
					cout << " LOGIN \n \n" ;
					cout << " username " ; cin >> u_name ;
					cout << " password " ; cin >> password ;
					if( username == u_name && password == "hi" ){
								 
								 system("cls");
								 cout << "\n \n" ;
					             cout << username << " is loged" << "\n" "\n" ;
					             log_in = "loged" ;
					             
				            }
				            else{
				            	system("cls");
				            	cout << "\n \n" ;
						        cout << " please put correct uesrname & password . " << "\n" "\n"; 
						        login();
				            }
						
					}
					else {
						
						        system("cls");
				            	cout << "\n \n" ;
						        cout << " please first ON the Laptop . " << "\n" "\n"; 
						        
						
					}
					
					
				}
				
				/* system sleep mode */	
				void sleep(){
					
					if ( log_in == "loged" ){
						
					    cout << "\n \n" ;
						cout << " system is sleeping mode " ;
						
					}
					else {
						
						       // system("cls");
				            	cout << "\n \n" ;
						        cout << " please first LOGIN your account . " << "\n" "\n"; 
						        
					}
					
					
					
				}
					
				
				/* wifi mode */
				void wifi(){
					
				cout << "\n \n" ;						
				cout << " if you want WiFi : " ;
				cin >> WiFi ;
				if( WiFi == "on" || WiFi == "off" ){
					
					if( WiFi == "on" ){
						
						cout << "\n \n" ;
						cout << " WiFi is ON " << "\n" "\n" ; 
						WiFi = "on" ;
					}
					if( WiFi == "no" ){
						
						cout << "\n \n" ;
						cout << " WiFi is OFF " << "\n" "\n" ; 
						WiFi = "off" ;
						
					}
				}
				            else{
				            	system("cls");
				            	cout << "\n \n" ;
						        cout << " please ON or OFF . " << "\n" "\n" ; 
						        wifi();
				            }
										
				}
				
								
				/* battery status */
				void battery(){
					
					int btty = battry ;
					cout << "\n \n" ;
					cout << " battery status is " <<  btty << "%" << "\n" "\n"; 
					
				}
				
				
				/* free spaces */
				void free_space(){
					
					int f_space = storage - storaged ;
					cout << "\n \n" ;
					cout << " free space status is " <<  f_space << "%" << "\n" "\n"; 
					
				}
						
						
				/* charge mode */			
				void charging(){
				
				cout << "\n \n" ;
				cout << " if you want plug charge " ;
				cin >> chge ;
				if( chge == "yes" || chge == "no" ){
					
					if( chge == "yes" ){
						cout << " how many % charge " ;
				    	cin >> battry ;
						cout << " battery is charging ... " << "\n" "\n"; 
						cout << "\n \n" ;
						cout << " battery status is " <<  battry << "%" << "\n" "\n"; 
						chge = "pluged" ;
					}
					if( chge == "no" ){
						cout << "\n \n" ;
						cout << " OK goback " ;
						chge = "pluged out" ;
					}
				}
				else{
						system("cls");
						cout << "\n \n" ;
						cout << " please yes or no . " << "\n" "\n"; 
						cout << " ->->->->->  rerun  ->->->->-> " ;
						charging();
					}
										
				}
				
				/* stop charging mode */
				void stop_charging(){
						
						cout << "\n \n" ;
						chge = "pluged out" ;	
						cout << "\n" ;
						cout << " battery status is " <<  battry << "%" << "\n" "\n"; 
					
				}
				
				/* laptop charge mode */
				void laptop_charge(){
				
						cout << "\n \n" ;
						cout << " laptop charge is " <<  chge << "\n" "\n"; 
					
				}
				
				
			
				/* time initialised */
				int h = 6 ;
				int	m = 54 ;
				int	s = 15 ;
				string t_mode = "pm" ;
				
				/* time display */
				void time(){
					
					             system("cls");
								 cout << "\n \n" ;
					             cout << " time is " <<  h << ":" << m << ":" << s << " " << t_mode << "\n" "\n" ;
					
				}
				
				/* set time */
				void set_time(){
					
					cout << "\n" ;
					hours();
									
				}
				
				/* set time mode in time func */
				void time_mode(){
							
							cout << "\n \n" ;
							cout << " hours : " << h << "\n" ;
							cout << " minutes : " << m << "\n" ;
							cout << " seconds : " << s << "\n" ;
							cout << " time mode : " ; 
					        cin >> t_mode ;
					        if( t_mode == "am" || t_mode == "pm" ){
								 
								 system("cls");
								 cout << "\n \n" ;
					             cout << " time is " <<  h << ":" << m << ":" << s << " " << t_mode << "\n" "\n" ;
					             
				            }
				            else{
				            	system("cls");
				            	cout << "\n \n" ;
						        cout << " please AM or PM . " << "\n" "\n"; 
						        time_mode();
				            }
					
				}
				/* set seconds in time func */
				void second(){
							
							cout << "\n \n" ;
							cout << " hours : " << h << "\n" ;
							cout << " minutes : " << m << "\n" ;
					        cout << " seconds : " ; 
					        cin >> s ;
							
							if ( s > -1 && s < 60 ){
								 
								 cout << "\n" ;
								 system("cls");
								 time_mode();
								
							}
							else {
								system("cls");
								cout << "\n \n" ;
						        cout << " please valid seconds   \n \n " ;
						        second();
					       }
					
				}
				/* set minutes in time func */
				void minute(){
						
						cout << "\n \n" ;
						cout << " hours : " << h << "\n" ;
					    cout << " minutes : " ; 
					    cin >> m ;
						
						if ( m > -1 && m < 60 ){
							
							system("cls");
							cout << "\n" ;
							second();
							
						}
						else {
							system("cls");
							cout << "\n \n" ;
						    cout << " please valid minutes  \n \n " ;
						    minute();
					    }
					
				}
				/* set hours in time func */
				void hours(){
					
					cout << "\n \n" ;
					cout << " hours : " ; 
					cin >> h ;
					if ( h > 0 && h < 13 ){
						
						system("cls");
						cout << "\n" ;
						minute();
						
					}
					else {
						system("cls");
						cout << "\n \n" ;
						cout << " please valid hours \n \n " ;
						hours();
					}
					
				}
				
				/* your status */
				void status(){
					
					cout << "\n \n" ;
					cout << " status is " << "\"" << statuss << "\" ." << "\n" "\n";
					
				}
				
				/* wifi connect */
				void wifi_connect(){
					
					if ( WiFi == "on" ){
						
					string username ;
					string password ;
					
					cout << " username  " ;
					cin >> username ;
					cout << " password  " ;
					cin >> password ;
					
					if ( username == "yoga" && password == "hi" ){
						
						cout << " wifi is connected " << "\n" "\n"; 
						
					}	
					else{
						cout << " username or password is incorrect . " << "\n" "\n" ;
						cout << " please retry ..." ;system("cls");
					}				
					
						
					}
					else {
						
						       // system("cls");
				            	cout << "\n \n" ;
						        cout << " please ON your WiFi . " << "\n" "\n"; 
						        
					}
					
				}
				
				int ip = 0 ;
	            int op = 0 ;
	            string a_name[10];
				string f_name[10];
				
				/* create file */
				void create_file(string file_name){
					
					if ( log_in == "loged" ){
						
					f_name[op] = file_name ;
					op+=1;
					int new_file = 10 ;
					storaged = storaged + new_file ;
					cout << file_name << "  file is created." << "\n" "\n" ; 
						
					}
					else {
						
						       // system("cls");
				            	cout << "\n \n" ;
						        cout << " please first LOGIN your account . " << "\n" "\n"; 
						        
					}
					
				}
				
				/* created files */
				void created_files(){
					
					if ( log_in == "loged" ){
						
					int i;
					cout << " file created list " << "\n" "\n" << "        " ; 
					
					for ( i=0;i<op;i++ ){
						cout << f_name[i] << " " ;
					}
					
					cout << "\n" "\n" ;
						
					}
					else {
								
						        // system("cls");
				            	cout << "\n \n" ;
						        cout << " please first LOGIN your account . " << "\n" "\n"; 
						        
					}
					
				}
		
				
				/* create application */	
				void create_app(string app_name){
					
					if ( log_in == "loged" ){
						
					a_name[ip] = app_name ;
					ip+=1;
					int new_app = 0.2 ;
					ram_used = ram_used + new_app ;
					cout << app_name << "  app is created." << "\n" "\n" ; 
						
					}
					else {
						
						       // system("cls");
				            	cout << "\n \n" ;
						        cout << " please first LOGIN your account . " << "\n" "\n"; 
						        
					}
						
				}
				
				/* created application */
				void created_apps(){
					
					if ( log_in == "loged" ){
						
					int j;
					cout << " app created list " << "\n" "\n" << "        " ; 
					
					for ( j=0;j<ip;j++ ){
						cout << a_name[j] << " " ;
					}
					
					cout << "\n" "\n" ;
						
					}
					else {
						
						       // system("cls");
				            	cout << "\n \n" ;
						        cout << " please first LOGIN your account . " << "\n" "\n"; 
						        
					}
					
				}
				
				
				
				
	

};

int main() {
	
			laptop yoga;
			yoga.setlaptopdetails();
			yoga.laptopdetail();
			yoga.charging();
			yoga.battery();
//			yoga.setlaptopinsides();yoga.laptopinside();
//            yoga.laptop_mode();
//			yoga.login();
//			yoga.create_file("arul");
//			yoga.create_file("yoga");
//			yoga.create_app("sakthi");
//			yoga.create_app("vijay");
//			yoga.wifi();
//			yoga.battery();
//			yoga.free_space();
//			yoga.charging();
			yoga.set_time();
//			yoga.time();
//			yoga.status();
//			yoga.created_files();
//			yoga.created_apps();
//          yoga.wifi_connect();
//			yoga.stop_charging();
//			yoga.laptop_charge();
//			yoga.laptop_mode();
//			yoga.login();
//			yoga.sleep();
//			yoga.shutdown();
	
}
