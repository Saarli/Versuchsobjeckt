//http://www.bing.com/images/search?q=ascii+code&qpvt=ascii+code&FORM=IGRE#view=detail&id=4B026155637477FCF8551CA84681874F29059C98&selectedIndex=0
//http://cplus.kompf.de/artikel/random.html
//http://www.verschluesselungen.net/arten-von-verschluesselung
//http://notfaq.wordpress.com/2006/08/30/c-convert-int-to-string/
//http://msdn.microsoft.com/de-de/library/ff400292.aspx
//http://www.cplusplus.com/reference/functional/hash/
//http://social.msdn.microsoft.com/Forums/en-US/vcgeneral/thread/fc1efdcd-7c05-473a-a737-b881448257ab/

#include <ctime>
#include <cstdlib>
#using <mscorlib.dll> 
#include <tchar.h> 
#include <msclr\marshal_cppstd.h>

using msclr::interop::marshal_as;

ref class C1FacheVerschuelsselung//zu finden in Verschlüslung.cpp
{
private:
	System::String^ M_szuvers;
	System::String^ M_sversch;
	int M_iFacktor;
public:
	C1FacheVerschuelsselung()
	{
		srand(time(NULL));
    }
	~C1FacheVerschuelsselung()
	{

	}
	void uebergabe(System::String^ Satz);
	void Zufallswert();
	void Verschluesselung();
	void Entschluesselung();
	System::String^ ausgabe(bool ent_ver);
};

ref class CBlockVerschlueselung
{
private:
	System::String^ M_sKomplettversch;
	System::String^ M_sKomplettzuvers;
	System::String^ M_sBlockversch;
	int M_iFaktor;
public:
	void Verschluesselung();
	void entschluesselung();
	System::String^ ausgabe(bool);
	void uebergabe(System::String^ Satz);
};