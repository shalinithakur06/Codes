//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jun 26 18:35:35 2017 by ROOT version 5.34/21
// from TTree tree/Dimuon Tree
// found on file: ntuples_WW.root
//////////////////////////////////////////////////////////

#ifndef FinalPlots_h
#define FinalPlots_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class FinalPlots {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           nVtxs;
   Int_t           nGVtxs;
   Float_t         Vtx_x;
   Float_t         Vtx_y;
   Float_t         Vtx_z;
   Float_t         GenWeight;
   Float_t         mc_EventWeight;
   Int_t           nMuons;
   Int_t           nAK8Jets;
   Int_t           nJets;
   Float_t         JetPt[12];   //[nJets]
   Float_t         JetEn[12];   //[nJets]
   Float_t         JetEta[12];   //[nJets]
   Float_t         JetPhi[12];   //[nJets]
   Int_t           JetID[12];   //[nJets]
   Float_t         JetVtxMass[12];   //[nJets]
   Int_t           JetPFLooseId[12];   //[nJets]
   Float_t         aK8JetPt[5];   //[nAK8Jets]
   Float_t         aK8JetEn[5];   //[nAK8Jets]
   Float_t         aK8JetEta[5];   //[nAK8Jets]
   Float_t         aK8JetPhi[5];   //[nAK8Jets]
   Float_t         aK8JetMass[5];   //[nAK8Jets]
   Float_t         aK8Jet_tau1[5];   //[nAK8Jets]
   Float_t         aK8Jet_tau2[5];   //[nAK8Jets]
   Float_t         aK8Jet_tau3[5];   //[nAK8Jets]
   Float_t         aK8JetPrunedMass[5];   //[nAK8Jets]
   Float_t         aK8JetPrunedMassCorr[5];   //[nAK8Jets]
   Float_t         MuPt[2];   //[nMuons]
   Float_t         MuEn[2];   //[nMuons]
   Float_t         MuEta[2];   //[nMuons]
   Float_t         MuPhi[2];   //[nMuons]
   Float_t         MuSIP[2];   //[nMuons]
   Float_t         MuInnerD0[2];   //[nMuons]
   Float_t         MuInnerDz[2];   //[nMuons]
   Float_t         MuIsoTrk[2];   //[nMuons]
   Float_t         MuPFChIso[2];   //[nMuons]
   Float_t         MuPFPhoIso[2];   //[nMuons]
   Float_t         MuPFNeuIso[2];   //[nMuons]
   Float_t         MuPFPUIso[2];   //[nMuons]
   Float_t         MuPFMiniIso[2];   //[nMuons]
   Float_t         MuInnervalidFraction[2];   //[nMuons]
   Float_t         MusegmentCompatibility[2];   //[nMuons]
   Float_t         Muchi2LocalPosition[2];   //[nMuons]
   Float_t         MutrkKink[2];   //[nMuons]
   Float_t         MuBestTrkPtError[2];   //[nMuons]
   Float_t         MuBestTrkPt[2];   //[nMuons]
   Int_t           MuPixelLayers[2];   //[nMuons]
   Int_t           MuMatches[2];   //[nMuons]
   Int_t           MuCharge[2];   //[nMuons]
   Int_t           MuType[2];   //[nMuons]
   Int_t           MuTrkQuality[2];   //[nMuons]
   UInt_t          MuFiredTrgs[2];   //[nMuons]
   UInt_t          MuFiredL1Trgs[2];   //[nMuons]
   UShort_t        MuIDbit[2];   //[nMuons]

   // List of branches
   TBranch        *b_nVtxs;   //!
   TBranch        *b_nGVtxs;   //!
   TBranch        *b_Vtx_x;   //!
   TBranch        *b_Vtx_y;   //!
   TBranch        *b_Vtx_z;   //!
   TBranch        *b_GenWeight;   //!
   TBranch        *b_mc_EventWeight;   //!
   TBranch        *b_nMuons;   //!
   TBranch        *b_nAK8Jets;   //!
   TBranch        *b_nJets;   //!
   TBranch        *b_JetPt;   //!
   TBranch        *b_JetEn;   //!
   TBranch        *b_JetEta;   //!
   TBranch        *b_JetPhi;   //!
   TBranch        *b_JetID;   //!
   TBranch        *b_JetVtxMass;   //!
   TBranch        *b_JetPFLooseId;   //!
   TBranch        *b_aK8JetPt;   //!
   TBranch        *b_aK8JetEn;   //!
   TBranch        *b_aK8JetEta;   //!
   TBranch        *b_aK8JetPhi;   //!
   TBranch        *b_aK8JetMass;   //!
   TBranch        *b_aK8Jet_tau1;   //!
   TBranch        *b_aK8Jet_tau2;   //!
   TBranch        *b_aK8Jet_tau3;   //!
   TBranch        *b_aK8JetPrunedMass;   //!
   TBranch        *b_aK8JetPrunedMassCorr;   //!
   TBranch        *b_MuPt;   //!
   TBranch        *b_MuEn;   //!
   TBranch        *b_MuEta;   //!
   TBranch        *b_MuPhi;   //!
   TBranch        *b_MuSIP;   //!
   TBranch        *b_MuInnerD0;   //!
   TBranch        *b_MuInnerDz;   //!
   TBranch        *b_MuIsoTrk;   //!
   TBranch        *b_MuPFChIso;   //!
   TBranch        *b_MuPFPhoIso;   //!
   TBranch        *b_MuPFNeuIso;   //!
   TBranch        *b_MuPFPUIso;   //!
   TBranch        *b_MuPFMiniIso;   //!
   TBranch        *b_MuInnervalidFraction;   //!
   TBranch        *b_MusegmentCompatibility;   //!
   TBranch        *b_Muchi2LocalPosition;   //!
   TBranch        *b_MutrkKink;   //!
   TBranch        *b_MuBestTrkPtError;   //!
   TBranch        *b_MuBestTrkPt;   //!
   TBranch        *b_MuPixelLayers;   //!
   TBranch        *b_MuMatches;   //!
   TBranch        *b_MuCharge;   //!
   TBranch        *b_MuType;   //!
   TBranch        *b_MuTrkQuality;   //!
   TBranch        *b_MuFiredTrgs;   //!
   TBranch        *b_MuFiredL1Trgs;   //!
   TBranch        *b_MuIDbit;   //!

   FinalPlots(TTree *tree=0);
   virtual ~FinalPlots();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FinalPlots_cxx
FinalPlots::FinalPlots(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ntuples_DYmad_2017_10_21.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ntuples_DYmad_2017_10_21.root");
      }
      f->GetObject("tree",tree);

   }
   Init(tree);
}

FinalPlots::~FinalPlots()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FinalPlots::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FinalPlots::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void FinalPlots::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("nVtxs", &nVtxs, &b_nVtxs);
   fChain->SetBranchAddress("nGVtxs", &nGVtxs, &b_nGVtxs);
   fChain->SetBranchAddress("Vtx_x", &Vtx_x, &b_Vtx_x);
   fChain->SetBranchAddress("Vtx_y", &Vtx_y, &b_Vtx_y);
   fChain->SetBranchAddress("Vtx_z", &Vtx_z, &b_Vtx_z);
   fChain->SetBranchAddress("GenWeight", &GenWeight, &b_GenWeight);
   fChain->SetBranchAddress("mc_EventWeight", &mc_EventWeight, &b_mc_EventWeight);
   fChain->SetBranchAddress("nMuons", &nMuons, &b_nMuons);
   fChain->SetBranchAddress("nAK8Jets", &nAK8Jets, &b_nAK8Jets);
   fChain->SetBranchAddress("nJets", &nJets, &b_nJets);
   fChain->SetBranchAddress("JetPt", JetPt, &b_JetPt);
   fChain->SetBranchAddress("JetEn", JetEn, &b_JetEn);
   fChain->SetBranchAddress("JetEta", JetEta, &b_JetEta);
   fChain->SetBranchAddress("JetPhi", JetPhi, &b_JetPhi);
   fChain->SetBranchAddress("JetID", JetID, &b_JetID);
   fChain->SetBranchAddress("JetVtxMass", JetVtxMass, &b_JetVtxMass);
   fChain->SetBranchAddress("JetPFLooseId", JetPFLooseId, &b_JetPFLooseId);
   fChain->SetBranchAddress("aK8JetPt", aK8JetPt, &b_aK8JetPt);
   fChain->SetBranchAddress("aK8JetEn", aK8JetEn, &b_aK8JetEn);
   fChain->SetBranchAddress("aK8JetEta", aK8JetEta, &b_aK8JetEta);
   fChain->SetBranchAddress("aK8JetPhi", aK8JetPhi, &b_aK8JetPhi);
   fChain->SetBranchAddress("aK8JetMass", aK8JetMass, &b_aK8JetMass);
   fChain->SetBranchAddress("aK8Jet_tau1", aK8Jet_tau1, &b_aK8Jet_tau1);
   fChain->SetBranchAddress("aK8Jet_tau2", aK8Jet_tau2, &b_aK8Jet_tau2);
   fChain->SetBranchAddress("aK8Jet_tau3", aK8Jet_tau3, &b_aK8Jet_tau3);
   fChain->SetBranchAddress("aK8JetPrunedMass", aK8JetPrunedMass, &b_aK8JetPrunedMass);
   fChain->SetBranchAddress("aK8JetPrunedMassCorr", aK8JetPrunedMassCorr, &b_aK8JetPrunedMassCorr);
   fChain->SetBranchAddress("MuPt", MuPt, &b_MuPt);
   fChain->SetBranchAddress("MuEn", MuEn, &b_MuEn);
   fChain->SetBranchAddress("MuEta", MuEta, &b_MuEta);
   fChain->SetBranchAddress("MuPhi", MuPhi, &b_MuPhi);
   fChain->SetBranchAddress("MuSIP", MuSIP, &b_MuSIP);
   fChain->SetBranchAddress("MuInnerD0", MuInnerD0, &b_MuInnerD0);
   fChain->SetBranchAddress("MuInnerDz", MuInnerDz, &b_MuInnerDz);
   fChain->SetBranchAddress("MuIsoTrk", MuIsoTrk, &b_MuIsoTrk);
   fChain->SetBranchAddress("MuPFChIso", MuPFChIso, &b_MuPFChIso);
   fChain->SetBranchAddress("MuPFPhoIso", MuPFPhoIso, &b_MuPFPhoIso);
   fChain->SetBranchAddress("MuPFNeuIso", MuPFNeuIso, &b_MuPFNeuIso);
   fChain->SetBranchAddress("MuPFPUIso", MuPFPUIso, &b_MuPFPUIso);
   fChain->SetBranchAddress("MuPFMiniIso", MuPFMiniIso, &b_MuPFMiniIso);
   fChain->SetBranchAddress("MuInnervalidFraction", MuInnervalidFraction, &b_MuInnervalidFraction);
   fChain->SetBranchAddress("MusegmentCompatibility", MusegmentCompatibility, &b_MusegmentCompatibility);
   fChain->SetBranchAddress("Muchi2LocalPosition", Muchi2LocalPosition, &b_Muchi2LocalPosition);
   fChain->SetBranchAddress("MutrkKink", MutrkKink, &b_MutrkKink);
   fChain->SetBranchAddress("MuBestTrkPtError", MuBestTrkPtError, &b_MuBestTrkPtError);
   fChain->SetBranchAddress("MuBestTrkPt", MuBestTrkPt, &b_MuBestTrkPt);
   fChain->SetBranchAddress("MuPixelLayers", MuPixelLayers, &b_MuPixelLayers);
   fChain->SetBranchAddress("MuMatches", MuMatches, &b_MuMatches);
   fChain->SetBranchAddress("MuCharge", MuCharge, &b_MuCharge);
   fChain->SetBranchAddress("MuType", MuType, &b_MuType);
   fChain->SetBranchAddress("MuTrkQuality", MuTrkQuality, &b_MuTrkQuality);
   fChain->SetBranchAddress("MuFiredTrgs", MuFiredTrgs, &b_MuFiredTrgs);
   fChain->SetBranchAddress("MuFiredL1Trgs", MuFiredL1Trgs, &b_MuFiredL1Trgs);
   fChain->SetBranchAddress("MuIDbit", MuIDbit, &b_MuIDbit);
   Notify();
}

Bool_t FinalPlots::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FinalPlots::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FinalPlots::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FinalPlots_cxx
