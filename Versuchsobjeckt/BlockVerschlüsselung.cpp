#include "verschlüsselung.h"
#include <msclr\marshal_cppstd.h>
#include <sstream>

using msclr::interop::marshal_as;

void CBlockVerschlueselung::Verschluesselung()
{
	srand(time(NULL));
	
	int anz = M_sKomplettzuvers->Length / 5;
	int rest= M_sKomplettzuvers->Length % 5;
	if (rest!=0)
		anz++;
	int i =0, a=5;
	anz++;
	while(i<=anz)
	{
		M_iFaktor=rand()%255+1;
		if (i==(anz-1))
			a=rest;
		for (int j=0;j<a;j++)
		{
		
	
			if (j==0)
					M_sKomplettversch+=System::Convert::ToChar(M_iFaktor);
				else
				{
					if ((static_cast<int>(M_sKomplettzuvers[j-1+i*5])+M_iFaktor)<=255)
					{
						M_sKomplettversch+=System::Convert::ToChar((static_cast<int>(M_sKomplettzuvers[j-1+i*4]))+M_iFaktor);
					}else
					{
						int help=0;
						help = (static_cast<int>(M_sKomplettzuvers[j-1+i*5])+M_iFaktor)-255;
						M_sKomplettversch+=System::Convert::ToChar(33+help);
					}
				}

		}

		i++;
	}
}
void CBlockVerschlueselung::uebergabe(System::String^ Satz)
{
	M_sKomplettzuvers=Satz;
}
System::String^ CBlockVerschlueselung::ausgabe(bool ent_ver)
{
	if (ent_ver==false)
	{
		return M_sKomplettversch;
	}else
	{
		return M_sKomplettzuvers;
	}
}
void CBlockVerschlueselung::entschluesselung()
{
	M_sKomplettversch=M_sKomplettzuvers;
	M_sKomplettzuvers="";
	int anz = M_sKomplettversch->Length / 5;
	int rest= M_sKomplettversch->Length % 5;
	if (rest!=0)
		anz++;
	int i =0, a=5;
	anz++;
	while (i<=anz)
	{
		if (i==(anz-1))
			a=rest;
		for (int j=0;j<a;j++)
		{
		
				if (j==0)
					M_iFaktor=System::Convert::ToInt32(M_sKomplettversch[j+i*5]);
				else
				{
					if ((static_cast<int>(M_sKomplettversch[j+i*5])-M_iFaktor)>0)
					{
						M_sKomplettzuvers+=System::Convert::ToChar(static_cast<int>(M_sKomplettversch[j+i*5])-M_iFaktor);
					}else
					{
						M_sKomplettzuvers+=System::Convert::ToChar(255+(static_cast<int>(M_sKomplettversch[j+i*5])-M_iFaktor));
					}
				}

		}
		i++;
	}
}