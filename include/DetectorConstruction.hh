#include <G4VUserDetectorConstruction.hh>
#include "G4LogicalVolume.hh"
#include "GeometrySize.hh"
#include "G4SystemOfUnits.hh"
using namespace CLHEP;

class DetectorConstruction : public G4VUserDetectorConstruction{
public:

    G4VPhysicalVolume* Construct() override;

    //void ConstructSDandField() override;

    explicit DetectorConstruction(){
        InitializeMaterials();
    }
private:
    G4Material* vacuum;
    G4Material* wolfram;
    G4LogicalVolume* CreateDetector();
    G4LogicalVolume* detector_logic;
    G4LogicalVolume* cylinder_logic;
    G4LogicalVolume* detector_logical;
    G4LogicalVolume* cylinder_with_hole_logic;
    G4LogicalVolume* logicWorld;
    void InitializeMaterials();
};