#include "TChain.h"
#include <iostream>
using namespace std;

TChain* datachain()
{
TChain *ch = new TChain("ggNtuplizer/EventTree");
ch->Add("ggtree_dataRunH_100.root");
ch->Add("ggtree_dataRunH_101.root");
ch->Add("ggtree_dataRunH_100.root");
cout << ch->GetEntries()<<endl;
return ch;
/*
TFile *f = new TFile("DYmad_puvrtx.root","RECREATE");
TH1F *nvtx = new TH1F("nvtx" , "number of primary vertices ", 75, 0, 75);
//TH1F *hpu = new TH1F("hpu", "number of PU", 200, 0, 200);
//TH1F *hpu = (TH1F*)ch->GetHistogram("hPU");
ch->Draw("nVtx>>nvtx");
//ch->Draw("hPU>>hpu");
nvtx->Draw();
//hpu->Draw();
//return;
f->cd();
nvtx->Write();
//hpu->Write();
f->Write();
f->Close();
*/
}
