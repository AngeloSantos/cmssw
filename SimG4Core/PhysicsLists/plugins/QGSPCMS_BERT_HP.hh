#ifndef SimG4Core_PhysicsLists_QGSPCMS_BERT_HP_H
#define SimG4Core_PhysicsLists_QGSPCMS_BERT_HP_H 1

#include "SimG4Core/Physics/interface/PhysicsList.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

class QGSPCMS_BERT_HP: public PhysicsList {

public:
  QGSPCMS_BERT_HP(G4LogicalVolumeToDDLogicalPartMap& map, const HepPDT::ParticleDataTable * table_, sim::FieldBuilder *fieldBuilder_, const edm::ParameterSet & p);
};

#endif

