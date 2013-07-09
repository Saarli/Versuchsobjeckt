#include "verschlüsselung.h"
#include <msclr\marshal_cppstd.h>
#include <sstream>

using msclr::interop::marshal_as;


void C1FacheVerschuelsselung::uebergabe(System::String^ Satz)
{
	M_szuvers=Satz;
}
void C1FacheVerschuelsselung::Zufallswert()
{
	M_iFacktor=(rand()%255)+1;
}
void C1FacheVerschuelsselung::Verschluesselung()
{
	for (int i=0; i<=M_szuvers->Length; i++)
	{
		if (i==0)
		{
			M_sversch+=System::Convert::ToChar(M_iFacktor);
		}
		else
		{
			if ((static_cast<int>(M_szuvers[i-1])+M_iFacktor)<=255)
			{
				M_sversch+=System::Convert::ToChar((static_cast<int>(M_szuvers[i-1]))+M_iFacktor);
			}else
			{
				int help=0;
				help = (static_cast<int>(M_szuvers[i-1])+M_iFacktor)-255;
				M_sversch+=System::Convert::ToChar(help);
			}	
		}
	}
}
void C1FacheVerschuelsselung::Entschluesselung()
{
	M_sversch=M_szuvers;
	M_szuvers="";
	for (int i = 0; i< M_sversch->Length; i++)
	{
		if (i==0)
			M_iFacktor=System::Convert::ToInt32(M_sversch[i]);//auslesen des Faktors
		else
		{
			if ((static_cast<int>(M_sversch[i])-M_iFacktor)>0)
					{
						M_szuvers+=System::Convert::ToChar(static_cast<int>(M_sversch[i])-M_iFacktor);
					}else
					{
						M_szuvers+=System::Convert::ToChar(255+(static_cast<int>(M_sversch[i])-M_iFacktor));
					}
		}
	}
}
System::String^ C1FacheVerschuelsselung::ausgabe(bool ent_ver)
{
	if (ent_ver==false)
	{
		return M_sversch;
	}else
	{
		return M_szuvers;
	}
}