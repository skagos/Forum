#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Names for data members of posts
string ProxeiraKeimenaTexts[]={"geia sas","tha ithela voitheia","den mporw na katalavw ti zitaei","einai pithanon","einai diskoli taktiki","den ginetai",
"o arithmos einai periergos","tespa tha t doume","o nomos to zitaei adelfe","den mporw na epikoinwnisw mazi sou","xaxaxaxaxaxax","Prokopis is laughing", 
"noti zoume gia na se akoume ","agalmata na ginomastan agalmata ","einai i skepsi mou treli","ta matoklada sou lampoun","etsi 3ekinisa loipon etci 3ekinisa",
"pira ti morfi sou kai efiga 3ana me ti thimisi sou volta sta stena","soma mou soma mou ftiaxmeno apo pilo","an tha se xasw na to xereis tha xathw","teleiakai paula"
"ta matia sou exoun 3etrelanei to xwrio","bmw m3","bmw m3 Jonnhy Famous","Bmw m3 Max Speed 340km","tha TRELATHW tha Trelathw me to Paanathinaiko","Pao Fans",
" Pao thriskeia Thira 13","Olympic Stadium ","BOGARTTTTTT","askisi 1 ","i ilopoiisi tis askisis autis is very difficul for me sorry man","AGIOS LOUKAS",
"Hlie mou Dinami Mou","Dimitris Mitrelos","you are my heart and my mind","#LORD#of#the#RIngs","#The#Return#oF#The#King","JonnHY FAmous and George Episimos",
"GEorge KareliAS and SONs","o notis einai a3ia anektimiti for our lives"};

string ProxeiroiTitloiPosts[]={"Problem1","Problem2","Problem3","Problem4","Problem5","Problem6","Problem7","Problem8","Problem9","Problem10","Problem11",
"Problem12","Problem13","Problem14","Problem15","Problem16","Problem17","Problem18","Problem19","Problem20","Problem21","Problem22","Problem23","Problem24","Problem25",
"Problem26","Problem27","Problem28","Problem29","Problem30"};
string ProxeiraNamesCreators[]={"prokopis","vagelis","konstantinos","giannis","panagiwtis","dimitra","mixalis","giwrgos","nikos","alexandros","apollwnas","DIAS",
"Afroditi","Athina","Aggela","Antwnis","vasilis","giwrgis","mpountanis","rokos","giwrgos Tzzak","Gkagkas","Triminis","Saouron","Elpida","Ira","Hades"};
//Names for data members of threads
string ProxeiroiTitloiCreator[]={"Title1","Title2","Title3","Title4","Title5","Title6","Title7","Title8","Title9","Title10","Title11","Title12","Title12",
"Title13","Title14","Title15","Title16","Title17","Title18","Title19","Title20","Title21","Title24","Title25","Title23","Title22","Title28","Title29","Title30",
"Title31"};
int number;
string ProxeiroiTitloiThema[]={"ThemaA","ThemaB","ThemaG","ThemaD","ThemaE","ThemaZ","ThemaH","ThemaTHI","ThemaI","ThemaK","ThemaL","ThemaM","ThemaN","ThemaJ",
"ThemaP","ThemaR","ThemaS","ThemaPROKOPIS","ThemaGKALINIS","ThemaGKALIOURIS","ThemaJH","ThemaYUT","ThemaKOLIOS","ThemaKAPATS","ThemaPLATEIA000","ThemaAGIOU","ThemaLOUKA","ThemaYEAHHH","ThemaKADDITI",
"ThemaNOT","ThemaMALE","ThemaFEMALE","themanone","den eimai kanenos","exw thema eimai diaforetikos","ennoeitai ","kleinw tis kourtines na min antkrisw","den iparxeis"
"auti tin agia wra","mou les den ginetai na 3anaimaste mazi pws apokleietai ","kale mou aggele","nostalgw ta feggaria tou kalokairiou ston agio louka"
"taverna psistaria Korais","ThemaRE","ThemaJIPNA","ThemaTIEINAI","ThemaAYTA","ThemamPOUKANIS"};
int CounterPersonalID=0;
int ErwtimatosSimvoloseiras=0;
int CounterCreatorPosts=0;
int met=0;
string Erwtima3simvoloseira="Rules and Useful Information";
struct Date{
	private:
		int hour;
		int minute;
		int day;
		int month;
		int year;
	public:
		void print_values_ofstruct()const
		{
				if(this->hour<10&&this->minute<10)
					cout<<this->day<<"-"<<this->month<<"-"<<this->year<<"       "<<"0"<<this->hour<<":"<<"0"<<this->minute<<endl;
				else if(this->hour<10&&this->minute>=10)
					cout<<this->day<<"-"<<this->month<<"-"<<this->year<<"       "<<"0"<<this->hour<<":"<<this->minute<<endl;
				else if(this->hour>=10&&this->minute<10)
					cout<<this->day<<"-"<<this->month<<"-"<<this->year<<"       "<<this->hour<<":"<<"0"<<this->minute<<endl;
				else
						cout<<this->day<<"-"<<this->month<<"-"<<this->year<<"       "<<this->hour<<":"<<this->minute<<endl;
				
		}
		void set_valuesofstruct()
		{
				hour=rand()%24+0;
				minute=rand()%60+0;
				day=rand()%31+1;
				month=rand()%12+1;
				year=rand()%3+2013;
		}
};
class Post{
	private:
		string Creator;
		string Title;
		int ID;
		Date CreationDate;
		string Text;
	public:
		Post(int ID ,string Title,string Creator,Date CreationDate,string Text )
		{
			cout<<"-------------------------------------------------------------------"<<endl;
			this->ID=ID;
			this->Creator=Creator;
			this->Title=Title;
			this->CreationDate=CreationDate;
			this->Text=Text;
			cout<<"Post with ID:"<<this->ID<<endl;
			cout<<"Post Creator:"<<this->Creator<<endl;
			cout<<"Post Title:"<<this->Title<<endl;
			cout<<"Post CreationDate:"<<" ";
			CreationDate.print_values_ofstruct();
			cout<<"Post Text:"<<this->Text<<endl;
		}
		void print_valuesofPosts()const
		{
			cout<<"Post with ID:"<<this->ID<<endl;
			cout<<"Post Creator:"<<this->Creator<<endl;
			cout<<"Post Title:"<<this->Title<<endl;
			cout<<"Post CreationDate"<<" ";
			CreationDate.print_values_ofstruct();
			cout<<"Post Text:"<<this->Text<<endl;
			cout<<endl;
		}
		void searchingPosts(const int &number)const
		{
				if(number==this->ID)
					this->print_valuesofPosts();
		}
		~Post()
		{
				cout<<"Post number:"<<this->ID<<"  "<<"is about to be destroyed"<<endl;
		}	
};
class Thread{
	private:
		string Creator;
		Date CreationDate;
		string Thema;
		Post* PostTable[4];
	public:
	Thread(string Creator,string Thema,Date CreationDate)
	{
		this->Thema=Thema;
		this->Creator=Creator;
		this->CreationDate=CreationDate;
		cout<<endl;
		cout<<"Thread with Subject:"<<this->Thema<<"   "<<"has just been created!"<<endl;
		CounterCreatorPosts=0;
		for(int i=0;i<4;i++)
		{
			int prosID;
			string prosCreator;
			prosID=CounterPersonalID++;
			string prosTitle;
			Date y;
			y.set_valuesofstruct();
			string prosText;
			prosTitle=ProxeiroiTitloiPosts[rand()%25];
			prosText=ProxeiraKeimenaTexts[rand()%35];
			if(CounterCreatorPosts==0)
			{
					PostTable[i]=new Post(prosID ,prosTitle, Creator,y,prosText);
					CounterCreatorPosts++;
			}
			else
			{
					prosCreator=ProxeiraNamesCreators[rand()%27];
					PostTable[i]=new Post(prosID ,prosTitle,prosCreator,y,prosText);
					CounterCreatorPosts++;
			}
		}
	}
	void printf_TitleofThread()const
	{
			cout<<this->Thema<<endl;
	}
	void searching(string onomaThread)const
	{
			if(onomaThread==this->Thema)
			{
					this->print_Thread();
			}			
	}
	void print_Thread()const
	{
			cout<<"Subject of Thread:"<<this->Thema<<endl;
			cout<<"Creator of Thread:"<<this->Creator<<endl;
			cout<<"Date Creation of Thread:";
			this->CreationDate.print_values_ofstruct();
			cout<<endl;
			for(int i=0;i<4;i++)
				PostTable[i]->print_valuesofPosts();
	}
	void searching_posts(const int &number)const
	{
			for(int i=0;i<4;i++)
			{
					PostTable[i]->searchingPosts(number);
			}
	}
	~Thread()
	{
		for(int i=0;i<4;i++)
			delete PostTable[i];
		cout<<"Thread with subject:"<<this->Thema<<" "<<"is about to be destroyed"<<endl;
		cout<<"-------------------------------------------------------------------"<<endl;
	}		
};
class Forum{
	private:
		string Title;
		Thread* ThreadTable[3];
	public:
	Forum(string Title):Title(Title)
	{
		cout<<"Forum with Title:"<<this->Title<<" "<<"has just been created!"<<endl;
		cout<<"---------------------------------------------------------------------"<<endl;
		cout<<"----------------------------------------------------------------------"<<endl;
		for(int i=0;i<3;i++)
		{
			Date x;
			x.set_valuesofstruct();
			string prosCreator,prosThema;
			prosCreator=ProxeiroiTitloiCreator[rand()%30];
			prosThema=ProxeiroiTitloiThema[rand()%35];
			if(ErwtimatosSimvoloseiras==0)
			{
				prosThema=Erwtima3simvoloseira;
				ErwtimatosSimvoloseiras++;
			}
			else
			{
						prosThema=ProxeiroiTitloiThema[rand()%35];
						ErwtimatosSimvoloseiras++;
			}
			ThreadTable[i]=new Thread(prosCreator,prosThema,x);
		}	
	}
	void print_TitlesofThreads()const
	{
		cout<<endl<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"2o Erwtima"<<endl;
		cout<<"-------------------------------"<<endl;
		for(int i=0;i<3;i++)
			ThreadTable[i]->printf_TitleofThread();
		cout<<"-------------------------------"<<endl;
	}
	void print_Thread(string onomaThread )const
	{
		cout<<endl<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"3o Erwtima"<<endl;
		cout<<"-------------------------------"<<endl;
			for(int i=0;i<3;i++)
				ThreadTable[i]->searching(onomaThread);
		cout<<"-------------------------------"<<endl;	
	}
	void print_myPosts(const int &number)const
	{
			if(met==0)
			{
				cout<<endl<<"-------------------------------"<<endl;
				cout<<"4o Erwtima"<<endl;
				cout<<"-------------------------------"<<endl;
			}
			for(int i=0;i<3;i++)		
				ThreadTable[i]->searching_posts(number);	
			if(met==3)
			{
				cout<<endl<<"-------------------------------"<<endl;
				cout<<endl<<"-------------------------------"<<endl;
			}
			met++;
	}
	~Forum()
	{
		for(int i=0;i<3;i++)
			delete ThreadTable[i];
		cout<<"---------------------------------------------------------------------"<<endl;
		cout<<"----------------------------------------------------------------------"<<endl;
		cout<<"Forum with title:"<<this->Title<<" "<<"is about to be destroyed"<<endl;
	}		
};
int main()
{
	srand(time(NULL));
	Forum A("Object Oriented Programming");
	A.print_TitlesofThreads();
	A.print_Thread("Rules and Useful Information");
	for(int i=0;i<4;i++)
	{
			number=rand()%12;//[a,b]->rand()%(b-a+1)+a
			A.print_myPosts(number);
	}
	return 0;
}
