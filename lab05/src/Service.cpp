#include "Service.h"
#include "SnowCannon.h"
using namespace std;

void Service::Test(SnowCannon *p, double a){
    cout << "#############################################################\n";
    cout << "### Test serwisowy ###\n\n";
    cout << "1. Uzupelnij zbiornik do pelna:\n";
    p->Reload(p->getcapacity() - p->getwater());
    cout << "2. Przebieg testowy: " <<  a << " metrow szesciennych:\n";
    p->Start();
    p->Make(a);
    p->Stop();
    cout << "### Koniec testu serwisowego ###\n";
    cout << "#############################################################\n\n";
}

void Service::TestCopy(SnowCannon p, double a){
    cout << "#############################################################\n";
    cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###\n\n";
    cout << "1. Uzupelnij zbiornik do pelna:\n";
    p.Reload(p.getcapacity()-p.getwater());
    cout << "2. Przebieg testowy: " <<  a << " metrow szesciennych:\n";
    p.Start();
    p.Make(a);
    p.Stop();
    cout << "### Koniec testu serwisowego ###\n";
    cout << "#############################################################\n\n";
    
}
