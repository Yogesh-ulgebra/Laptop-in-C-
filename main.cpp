#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class laptop {
    private:

    /* Laptop details initialised */
    int storage = 100;
    int ram = 2;
    string brand = "YOGA";
    string processor = "yogame";
    double mac_id = 91.343;
    string charge = " pluged out ";
    string laptop_mod;
    string log_in = "logouted";

    /* System details initialised */
    string WiFi = "on";
    string statuss = " do set please ";
    string os = "WINDOWS";
    string username = "yogame";

    /* first time battery */
    int battry = 100;

    /* additional system details  */
    float ram_used = 0;
    string chge = "pluged";
    int storaged = 0;


public:

    /* Laptop  on mode */
    void laptop_mode() {


        cout << "\n \n";
        cout << " Laptop mode is ";
        c_in();
        laptop_mod = y;
        if (laptop_mod == "on" || laptop_mod == "off") {

            system("cls");
            cout << "\n \n";
            cout << " laptop is " << laptop_mod << "\n" "\n";
            laptop_mod = laptop_mod;

        } else {
            system("cls");
            cout << "\n \n";
            cout << " please ON or OFF . " << "\n" "\n";
            laptop_mode();
        }

    }

    /* laptop shutdown ( off mode ) */
    void shutdown() {


        cout << "\n \n";
        if (laptop_mod == "on") {

            // system("cls") ;
            cout << "\n \n";
            cout << " laptop is shutting down ... " << "\n" "\n";
            laptop_mod = " off ";
            log_in = "logouted";

        } else {

            system("cls");
            cout << "\n \n";
            cout << " first you laptop ON . " << "\n" "\n";

        }

    }


public:

    /* Laptop details */
    void laptopdetail() {

        storage;
        ram;
        brand;
        processor;
        mac_id;
        cout << "\n \n" << " LapTop details : \n \n";
        getlaptopdetails();

    }

    /* Laptop details in cin */
    void setlaptopdetails() {
        cout << "\n \n" << " Set LapTop details : \n \n";
        cout << " laptop Brand : ";
        c_in();
        brand = y;
        cout << " laptop ram ( int* ) : ";
        c_int();
        ram = yg ;
        cout << " laptop storage ( int* ) : ";
        c_int();
        storage = yg ;
        cout << " laptop processor ";
        c_in();
        processor = y;
        cout << " laptop mac_id ( int* ) : ";
        c_int();
        mac_id = yg ;
        system("cls");
        cout << "\n \n" << " Seted LapTop details : \n \n";
        getlaptopdetails();
    }

    /* Laptop details in cout */
    void getlaptopdetails() {

        cout << " laptop Brand " << brand << "\n";
        cout << " laptop ram " << ram << " GB" << "\n";
        cout << " laptop storage " << storage << " GB" << "\n";
        cout << " laptop processor " << processor << "\n";
        cout << " laptop mac_id " << mac_id << ".89.888.12" << "\n" "\n";

    }

    /* System details */
    void laptopinside() {

        os;
        username;
        WiFi;
        statuss;

        cout << "\n \n" << " System Details : \n \n";
        getlaptopinsides();

    }

    /* System details in cin */
    void setlaptopinsides() {


        cout << "\n \n" << " Set System Details : \n \n";
        cout << " laptop OS ";
        c_in();
        os = y;
        cout << " system username ";
        c_in();
        username = y;
        cout << " WiFi status ";
        c_in();
        WiFi = y;
        cout << " My status ";
        c_in();
        statuss = y;
        system("cls");
        cout << "\n \n" << " Seted System Details : \n \n";
        getlaptopinsides();

    }

    /* System details in cout */
    void getlaptopinsides() {

        cout << " laptop OS " << os << "\n";
        cout << " system username " << username << "\n";
        cout << " WiFi status " << WiFi << "\n";
        cout << " My status " << "\"" << statuss << "\"" << "\n" "\n";

    }

    /* system login in laptop */
    void login() {

        username;
        string u_name;
        string password;
        if (laptop_mod == "on") {

            cout << "\n \n";
            cout << " LOGIN \n \n";
            cout << " username ";
            c_in();
            u_name = y;
            cout << " password ";
            c_in();
            password = y;
            if (username == u_name && password == "hi") {

                system("cls");
                cout << "\n \n ";
                cout << username << " is loged" << "\n" "\n";
                log_in = "loged";

            } else {
                system("cls");
                cout << "\n \n";
                cout << " please put correct uesrname & password . " << "\n" "\n";
                login();
            }

        } else {

            system("cls");
            cout << "\n \n";
            cout << " please first ON the Laptop . " << "\n" "\n";


        }


    }

    /* system sleep mode */
    void sleep() {

        if (log_in == "loged") {

            cout << "\n \n";
            cout << " system is sleeping mode ";

        } else {

            // system("cls");
            cout << "\n \n";
            cout << " please first LOGIN your account . " << "\n" "\n";

        }



    }

    /* wifi mode */
    void wifi() {

        cout << "\n \n";
        cout << " if you want WiFi : ";
        c_in();
        WiFi = y;
        if (WiFi == "on" || WiFi == "off") {

            if (WiFi == "on") {

				system("cls");
                cout << "\n \n";
                cout << " WiFi is ON " << "\n" "\n";
                WiFi = "on";
            }
            if (WiFi == "off") {
            	
				system("cls");
                cout << "\n \n";
                cout << " WiFi is OFF " << "\n" "\n";
                WiFi = "off";

            }
        } else {
            system("cls");
            cout << "\n \n";
            cout << " please ON or OFF . " << "\n" "\n";
            wifi();
        }

    }

    /* battery status */
    void battery() {

        int btty = battry;
        cout << "\n \n";
        cout << " battery status is " << btty << "%" << "\n" "\n";

    }

    /* free spaces */
    void free_space() {

        int f_space = storage - storaged;
        cout << "\n \n";
        cout << " free space status is " << f_space << " GB" << "\n" "\n";

    }
    
    /* free ram */
    void free_ram() {

        float f_ram = (float)ram - ram_used ;
        cout << "\n \n";
        cout << " free ram status is " << f_ram << " GB" << "\n" "\n";

    }

    /* charge mode */
    void charging() {

        cout << "\n \n";
        cout << " if you want plug charge ";
        c_in();
        chge = y ;
        if (chge == "yes" || chge == "no") {

            if (chge == "yes") {
                cout << " how many % charge ";
                c_int();
                battry = yg;
                system("cls");
                cout << "\n\n battery is charging ... " << "\n" "\n";
                cout << "\n";
                cout << " battery status is " << battry << "%" << "\n" "\n";
                chge = "pluged";
            }
            if (chge == "no") {
                cout << "\n \n";
                cout << " OK goback ";
                chge = "pluged out";
            }
        } else {
            system("cls");
            cout << "\n \n";
            cout << " please yes or no . " << "\n" "\n";
            cout << " ->->->->->  rerun  ->->->->-> ";
            charging();
        }

    }

    /* stop charging mode */
    void stop_charging() {

        cout << "\n \n";
        chge = "pluged out";
        cout << "\n";
        cout << " battery status is " << battry << "%" << "\n" "\n";

    }

    /* laptop charge mode */
    void laptop_charge() {

        cout << "\n \n";
        cout << " laptop charge is " << chge << "\n" "\n";

    }



    /* time initialised */
    int h = 6;
    int m = 54;
    int s = 15;
    string t_mode = "pm";

    /* time display */
    void time() {

        system("cls");
        cout << "\n \n";
        cout << " time is " << h << ":" << m << ":" << s << " " << t_mode << "\n" "\n";

    }

    /* set time */
    void set_time() {

        cout << "\n";
        hours();

    }

    /* set time mode in time func */
    void time_mode() {

        cout << "\n \n";
        cout << " hours : " << h << "\n";
        cout << " minutes : " << m << "\n";
        cout << " seconds : " << s << "\n";
        cout << " time mode : ";
        c_in();
        t_mode = y;
        if (t_mode == "am" || t_mode == "pm") {

            system("cls");
            cout << "\n \n";
            cout << " time is " << h << ":" << m << ":" << s << " " << t_mode << "\n" "\n";

        } else {
            system("cls");
            cout << "\n \n";
            cout << " please AM or PM . " << "\n" "\n";
            time_mode();
        }

    }

    /* set seconds in time func */
    void second() {

        cout << "\n \n";
        cout << " hours : " << h << "\n";
        cout << " minutes : " << m << "\n";
        cout << " seconds : ";
        c_int();
        s = yg ;

        if (s > -1 && s < 60) {

            cout << "\n";
            system("cls");
            time_mode();

        } else {
            system("cls");
            cout << "\n \n";
            cout << " please valid seconds   \n \n ";
            second();
        }

    }

    /* set minutes in time func */
    void minute() {

        cout << "\n \n";
        cout << " hours : " << h << "\n";
        cout << " minutes : ";
        c_int();
        m = yg ;

        if (m > -1 && m < 60) {

            system("cls");
            cout << "\n";
            second();

        } else {
            system("cls");
            cout << "\n \n";
            cout << " please valid minutes  \n \n ";
            minute();
        }

    }

    /* set hours in time func */
    void hours() {

        cout << "\n \n";
        cout << " hours : ";
        c_int();
        h = yg ;
        if (h > 0 && h < 13) {

            system("cls");
            cout << "\n";
            minute();

        } else {
            system("cls");
            cout << "\n \n";
            cout << " please valid hours \n \n ";
            hours();
        }

    }

    /* your status */
    void status() {

        cout << "\n \n";
        cout << " status is " << "\"" << statuss << "\" ." << "\n" "\n";

    }

    /* wifi connect */
    void wifi_connect() {

        if (WiFi == "on") {

            string username;
            string password;

            cout << "\n\n"" username : ";
            c_in();
            username = y ;
            cout << " password : ";
            c_in();
            password = y ;

            if (username == "yoga" && password == "hi") {
				
				system("cls");
                cout << "\n\n"" wifi is connected " << "\n" "\n";

            }
            else {
            	
                system("cls");
                cout << "\n\n"" username or password is incorrect . " << "\n" "\n";
                cout << " please retry ... \n \n";
                wifi_connect();
            }


        } else {

            system("cls");
            cout << "\n \n";
            cout << " please ON your WiFi . " << "\n" "\n";

        }

    }

    int ip = 0;
    int op = 0;
    string a_name[10];
    string f_name[10];

    /* create file */
    void create_file(string file_name) {

        if (log_in == "loged") {

            f_name[op] = file_name;
            op += 1;
            int new_file = 1 ;
            storaged = storaged + new_file;
            system("cls");
            cout << "\n\n " ;
            cout << file_name << "  file is created." << "\n" "\n";

        } else {

            system("cls");
            cout << "\n \n";
            cout << " please first LOGIN your account . " << "\n" "\n";

        }

    }

    /* created files */
    void created_files() {

        if (log_in == "loged") {

            int i;
            cout << "\n\n"" file created list " << "\n" "\n" << "        ";

            for (i = 0; i < op; i++) {
                cout << f_name[i] << " ";
            }

            cout << "\n" "\n";

        } else {

            system("cls");
            cout << "\n \n";
            cout << " please first LOGIN your account . " << "\n" "\n";

        }

    }

    /* create application */
    void create_app(string app_name) {

        if (log_in == "loged") {

            a_name[ip] = app_name;
            ip += 1;
            float new_app = 0.2;
            ram_used = ram_used + new_app;
            system("cls");
            cout << "\n\n " ;
            cout << app_name << "  app is created." << "\n" "\n";

        } else {

            system("cls");
            cout << "\n \n";
            cout << " please first LOGIN your account . " << "\n" "\n";

        }

    }

    /* created application */
    void created_apps() {

        if (log_in == "loged") {

            int j;
            cout << "\n\n"" app created list " << "\n" "\n" << "        ";

            for (j = 0; j < ip; j++) {
                cout << a_name[j] << " ";
            }

            cout << "\n" "\n";

        } else {

            system("cls");
            cout << "\n \n";
            cout << " please first LOGIN your account . " << "\n" "\n";

        }

    }
    /* laptop menu function */
    int menu_code ;
    void laptop_menu(){
        
        cout << "\n\n LAPTOP MENU : \n \n" ;
        
        cout << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" ;
        cout << "       Main menu         input  = 000 " "|";
        cout << " wifi                     =  09 " "|";
        cout << " create file              =  18 " << "\n";
        cout << "       laptop mode              =  01 " "|";
        cout << " battery status           =  10 " "|";
        cout << " created files            =  19 " << "\n";
        cout << "       shutdown                 =  02 " "|";
        cout << " charge mode              =  11 " "|";
        cout << " create app               =  20 " << "\n";
        cout << "       laptop details           =  03 " "|";
        cout << " stop charging mode       =  12 " "|";
        cout << " created apps             =  21 " << "\n";
        cout << "       set laptop details       =  04 " "|";
        cout << " laptop charge mode       =  13 " "|";
        cout << " free space in storage    =  22 " << "\n";
        cout << "       laptop system            =  05 " "|";
        cout << " time                     =  14 " "|";
        cout << " storage                  =  23 " << "\n";
        cout << "       set laptop system        =  06 " "|";
        cout << " set time                 =  15 " "|";
        cout << " free space in RAM        =  24 " << "\n";
        cout << "       login                    =  07 " "|";
        cout << " status                   =  16 " "|";
        cout << " Ram                      =  25 " << "\n";
        cout << "       sleep                    =  08 " "|";
        cout << " connect wifi             =  17 " "|";
        cout << " o/p window exit          =   e " << "\n";
        cout << "\n   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" ;
        
        cout << " Enter code :  " ;
        
        c_int();
        if(y == "e"){
                exit(0);                          //here is where I ask for help
        }
        menu_code = yg ;
        
        if ( menu_code > -1 && menu_code < 26 ) {
		
        
            if ( menu_code == 0 ) {
                system("cls");
                laptop_menu();
            }
            if ( menu_code == 1 ) {
                system("cls");
                laptop_mode();
                laptop_menu();
            }
            if ( menu_code == 2 ) {
                system("cls");
                shutdown();
                laptop_menu();
            }
            if ( menu_code == 3 ) {
                system("cls");
                laptopdetail();
                laptop_menu();
            }
            if ( menu_code == 4 ) {
                system("cls");
                setlaptopdetails();
                laptop_menu();
            }
            if ( menu_code == 5 ) {
                system("cls");
                laptopinside();
                laptop_menu();
            }
            if ( menu_code == 6 ) {
                system("cls");
                setlaptopinsides();
                laptop_menu();
            }
            if ( menu_code == 7 ) {
                system("cls");
                login();
                laptop_menu();
            }
            if ( menu_code == 8 ) {
                system("cls");
                sleep();
                laptop_menu();
            }
            if ( menu_code == 9 ) {
                system("cls");
                wifi();
                laptop_menu();
            }
            if ( menu_code == 10 ) {
                system("cls");
                battery();
                laptop_menu();
            }
            if ( menu_code == 11 ) {
                system("cls");
                charging();
                laptop_menu();
            }
            if ( menu_code == 12 ) {
                system("cls");
                stop_charging();
                laptop_menu();
            }
            if ( menu_code == 13 ) {
                system("cls");
                laptop_charge();
                laptop_menu();
            }
            if ( menu_code == 14 ) {
                system("cls");
                time();
                laptop_menu();
            }
            if ( menu_code == 15 ) {
                system("cls");
                set_time();
                laptop_menu();
            }
            if ( menu_code == 16 ) {
                system("cls");
                status();
                laptop_menu();
            }
            if ( menu_code == 17 ) {
                system("cls");
                wifi_connect();
                laptop_menu();
            }
            if ( menu_code == 18 ) {
                system("cls");
                string f_name ;
                cout << "\n\n"" file name is " ;
                c_in();
                f_name = y ;
                create_file(f_name);
                laptop_menu();
            }
            if ( menu_code == 19 ) {
                system("cls");
                created_files();
                laptop_menu();
            }
            if ( menu_code == 20 ) {
                system("cls");
                string a_name ;
                cout << "\n\n"" app name is " ;
                c_in();
                a_name = y ;
                create_app(a_name);
                laptop_menu();
            }
            if ( menu_code == 21 ) {
                system("cls");
                created_apps();
                laptop_menu();
            }
            if ( menu_code == 22 ) {
                system("cls");
                free_space();
                laptop_menu();
            }
            if ( menu_code == 23 ) {
                system("cls");
                cout << "\n\n" " storage space is  " << storage << " GB" ;
                laptop_menu();
            }
            if ( menu_code == 24 ) {
                system("cls");
                free_ram();
                laptop_menu();
            }
            if ( menu_code == 25 ) {
                system("cls");
                cout << "\n\n" " RAM space is  " << ram << " GB" ;
                laptop_menu();
            }
        }
        else{
        	
        	system("cls");
        	cout << " Please enter valid number ... \n \n" ;
        	laptop_menu() ;
        	
		}
    }

/* main menu in cin */
string y ;
int yg = 0;

void c_int(){
	
	cin >> y ;
    if ( y == "000" ){
		
		system("cls");
		laptop_menu() ;
		
	}
	else{
		stringstream geek(y);
	    geek >> yg;
	}
}
void c_in(){
	
	cin >> y ;
	if ( y == "000" ){
		system("cls");
		
		laptop_menu() ;
	}
	else{
		y ;
	}
	
	
	
}
/* class end */

};

int main() {

    laptop yoga;
    yoga.laptop_menu();
 //   yoga.laptop_mode();
//    yoga.setlaptopdetails();
//    yoga.laptopdetail();
//    yoga.charging();
//    yoga.battery();
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
   // yoga.set_time();
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
