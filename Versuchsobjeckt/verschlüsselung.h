
#include <ctime>
#include <cstdlib>
#using <mscorlib.dll> 
#include <tchar.h> 
#include <msclr\marshal_cppstd.h>

using msclr::interop::marshal_as;

ref class C1FacheVerschuelsselung//zu finden in Verschl�slung.cpp
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
