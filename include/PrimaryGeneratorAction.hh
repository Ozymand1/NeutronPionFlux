#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>
#include <G4GeneralParticleSource.hh>
#include "G4DecayTable.hh"
#include "G4DecayProducts.hh"
#include "G4IonTable.hh"

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction {
public:
    explicit PrimaryGeneratorAction();
    void GeneratePrimaries(G4Event *anEvent) override;

    ~PrimaryGeneratorAction() {
        delete fParticleGun;
    }
    /*double x = 0, y = 0, z = 0;*/
    int x = 0;
private:
    G4ParticleGun* fParticleGun;

};