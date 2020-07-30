#include "TChain.h"
#include <iostream>
using namespace std;

TChain* mcchain()
{
TChain *ch = new TChain("ggNtuplizer/EventTree");
ch->Add("ggtree_mc_100.root");
ch->Add("ggtree_mc_101.root");
ch->Add("ggtree_mc_102.root");
cout << ch->GetEntries()<<endl;
return ch;

}
