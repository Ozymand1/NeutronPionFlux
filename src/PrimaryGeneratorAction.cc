#include <G4MuonMinus.hh>
#include <G4DynamicParticle.hh>
#include "PrimaryGeneratorAction.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"
#include <random>

using namespace CLHEP;

void PrimaryGeneratorAction::GeneratePrimaries(G4Event *anEvent) {
    fParticleGun->SetParticleEnergy(198 * 4 * GeV);
    fParticleGun->SetParticlePosition(G4ThreeVector(0, 0, -15 * cm));
    fParticleGun->SetParticleMomentumDirection(G4ThreeVector(0, 0, 1 * cm));
    fParticleGun->GeneratePrimaryVertex(anEvent);
    x++;
    if (x % 10 == 0 ){
        std::cout<<x<<std::endl;
    }
}

PrimaryGeneratorAction::PrimaryGeneratorAction() {
    G4int n_particle = 1;
    fParticleGun = new G4ParticleGun(n_particle);
}