#define NPHOTMAX 10
#define NPHOTGENMAX 100

// Declaration of leaf types
Int_t           run;
Int_t           event;
Int_t           lumi;
Float_t         nvtx;
Int_t           LOGamma;
Int_t           ISRGamma;
Int_t           FSRGamma;
Int_t           npu;
Int_t           NtotEvents;
Float_t         xsection;
Float_t         EquivLumi;
Int_t           SampleID;
Float_t         pu_weight;
Float_t         pu_weight30;
Float_t         pu_weight50;
Float_t         pu_weight75;
Float_t         pu_weight90;
Int_t           nPhot_gen;
Int_t           nPhot_presel;
Float_t         ptPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         ePhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         etascPhot_presel  [NPHOTMAX];   //[nPhot_presel]
Float_t         etaPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         phiPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_jurECAL03_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_twrHCAL03_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_hlwTrack03_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_jurECAL04_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_twrHCAL04_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_hlwTrack04_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged01ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged02ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged03ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged04ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged05ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoCharged06ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons01ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons02ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons03ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons04ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons05ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoPhotons06ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals01ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals02ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals03ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals04ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals05ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_pfIsoNeutrals06ForCiC_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_scetawid_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_scphiwid_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_lambdaRatio_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         pid_HoverE_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         sEtaEtaPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         sEtaPhiPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         s4RatioPhot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         r9Phot_presel[NPHOTMAX];   //[nPhot_presel]
Float_t         rhoAllJets;
Float_t         rhoPF;
Float_t         rr_presel[NPHOTMAX];   //[nPhot_presel]
Int_t           isMatchedPhot[NPHOTMAX];   //[nPhot_presel]

Float_t         deltaRGenReco[NPHOTGENMAX];   //[nPhot_gen]
Float_t         deltaRGenReco_EB_nopresel[NPHOTGENMAX];   //[nPhot_gen]
Float_t         deltaRGenReco_EE_nopresel[NPHOTGENMAX];   //[nPhot_gen]
Float_t         eTrue_EB_nopresel[NPHOTGENMAX];   //[nPhot_gen]
Float_t         eTrue_EE_nopresel[NPHOTGENMAX];   //[nPhot_gen]
Float_t         eReco_EB_matched[NPHOTGENMAX];   //[nPhot_gen]
Float_t         eReco_EE_matched[NPHOTGENMAX];   //[nPhot_gen]
Int_t           vtxId;

std::vector<std::string>  *firedHLTNames;


   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_LOGamma;   //!
   TBranch        *b_ISRGamma;   //!
   TBranch        *b_FSRGamma;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_NtotEvents;   //!
   TBranch        *b_xsection;   //!
   TBranch        *b_EquivLumi;   //!
   TBranch        *b_SampleID;   //!
   TBranch        *b_pu_weight;   //!
   TBranch        *b_pu_weight30;   //!
   TBranch        *b_pu_weight50;   //!
   TBranch        *b_pu_weight75;   //!
   TBranch        *b_pu_weight90;   //!
   TBranch        *b_nPhot_gen;   //!
   TBranch        *b_nPhot_presel;   //!
   TBranch        *b_ptPhot_presel;   //!
   TBranch        *b_ePhot_presel;   //!
   TBranch        *b_etascPhot_presel  ;   //!
   TBranch        *b_etaPhot_presel;   //!
   TBranch        *b_phiPhot_presel;   //!
   TBranch        *b_pid_jurECAL03_presel;   //!
   TBranch        *b_pid_twrHCAL03_presel;   //!
   TBranch        *b_pid_hlwTrack03_presel;   //!
   TBranch        *b_pid_jurECAL04_presel;   //!
   TBranch        *b_pid_twrHCAL04_presel;   //!
   TBranch        *b_pid_hlwTrack04_presel;   //!
   TBranch        *b_pid_pfIsoCharged01ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoCharged02ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoCharged03ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoCharged04ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoCharged05ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoCharged06ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons01ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons02ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons03ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons04ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons05ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoPhotons06ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals01ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals02ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals03ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals04ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals05ForCiC_presel;   //!
   TBranch        *b_pid_pfIsoNeutrals06ForCiC_presel;   //!
   TBranch        *b_pid_scetawid_presel;   //!
   TBranch        *b_pid_scphiwid_presel;   //!
   TBranch        *b_pid_lambdaRatio_presel;   //!
   TBranch        *b_pid_HoverE_presel;   //!
   TBranch        *b_sEtaEtaPhot_presel;   //!
   TBranch        *b_sEtaPhiPhot_presel;   //!
   TBranch        *b_s4RatioPhot_presel;   //!
   TBranch        *b_r9Phot_presel;   //!
   TBranch        *b_rhoAllJets;   //!
   TBranch        *b_rhoPF;   //!
   TBranch        *b_rr_presel;   //!
   TBranch        *b_isMatchedPhot;   //!
   TBranch        *b_deltaRGenReco;   //!
   TBranch        *b_deltaRGenReco_EB_nopresel;   //!
   TBranch        *b_deltaRGenReco_EE_nopresel;   //!
   TBranch        *b_eTrue_EB_nopresel;   //!
   TBranch        *b_eTrue_EE_nopresel;   //!
   TBranch        *b_eReco_EB_matched;   //!
   TBranch        *b_eReco_EE_matched;   //!
   TBranch        *b_vtxId;   //!
   TBranch        *b_firedHLTNames;   //!
