// Bearing Types
LM6UU = 1;
LM8UU = 2;
LM10UU = 3;
LM12UU = 4;
LM6LUU = 5;
LM8LUU = 6;
LM10LUU = 7;
LM12LUU = 8;


// Bearing dimensions
lBearingLM6UU = 19.0;
rBearingOuterLM6UU = 12.0/2;
rBearingInnerLM6UU = 6.0/2;
nrOfBearingsPerRodLM6UU = 2;
useSelfAlignmentLM6UU = true;

lBearingLM8UU = 24.0;
rBearingOuterLM8UU = 15.0/2;
rBearingInnerLM8UU = 8.0/2;
nrOfBearingsPerRodLM8UU = 2;
useSelfAlignmentLM8UU = true;

lBearingLM10UU = 29.0;
rBearingOuterLM10UU = 19.0/2;
rBearingInnerLM10UU = 10.0/2;
nrOfBearingsPerRodLM10UU = 2;
useSelfAlignmentLM10UU = true;

lBearingLM12UU = 30.0;
rBearingOuterLM12UU = 21.0/2;
rBearingInnerLM12UU = 12.0/2;
nrOfBearingsPerRodLM12UU = 2;
useSelfAlignmentLM12UU = true;

lBearingLM6LUU = 35.0;
rBearingOuterLM6LUU = 12.0/2;
rBearingInnerLM6LUU = 6.0/2;
nrOfBearingsPerRodLM6LUU = 1;
useSelfAlignmentLM6LUU = false;

lBearingLM8LUU = 45.0;
rBearingOuterLM8LUU = 15.0/2;
rBearingInnerLM8LUU = 8.0/2;
nrOfBearingsPerRodLM8LUU = 1;
useSelfAlignmentLM8LUU = false;

lBearingLM10LUU = 55.0;
rBearingOuterLM10LUU = 19.0/2;
rBearingInnerLM10LUU = 10.0/2;
nrOfBearingsPerRodLM10LUU = 1;
useSelfAlignmentLM10LUU = false;

lBearingLM12LUU = 57.0;
rBearingOuterLM12LUU = 21.0/2;
rBearingInnerLM12LUU = 12.0/2;
nrOfBearingsPerRodLM12LUU = 1;
useSelfAlignmentLM12LUU = false;



function getLBearing(prmBearingType) = (prmBearingType==LM6UU)?lBearingLM6UU:(prmBearingType==LM8UU)?lBearingLM8UU:(prmBearingType==LM10UU)?lBearingLM10UU:(prmBearingType==LM12UU)?lBearingLM12UU:(prmBearingType==LM6LUU)?lBearingLM6LUU:(prmBearingType==LM8LUU)?lBearingLM8LUU:(prmBearingType==LM10LUU)?lBearingLM10LUU:(prmBearingType==LM12LUU)?lBearingLM12LUU:0;

function getRBearingOuter(prmBearingType) = (prmBearingType==LM6UU)?rBearingOuterLM6UU:(prmBearingType==LM8UU)?rBearingOuterLM8UU:(prmBearingType==LM10UU)?rBearingOuterLM10UU:(prmBearingType==LM12UU)?rBearingOuterLM12UU:(prmBearingType==LM6LUU)?rBearingOuterLM6LUU:(prmBearingType==LM8LUU)?rBearingOuterLM8LUU:(prmBearingType==LM10LUU)?rBearingOuterLM10LUU:(prmBearingType==LM12LUU)?rBearingOuterLM12LUU:0;

function getRBearingInner(prmBearingType) = (prmBearingType==LM6UU)?rBearingInnerLM6UU:(prmBearingType==LM8UU)?rBearingInnerLM8UU:(prmBearingType==LM10UU)?rBearingInnerLM10UU:(prmBearingType==LM12UU)?rBearingInnerLM12UU:(prmBearingType==LM6LUU)?rBearingInnerLM6LUU:(prmBearingType==LM8LUU)?rBearingInnerLM8LUU:(prmBearingType==LM10LUU)?rBearingInnerLM10LUU:(prmBearingType==LM12LUU)?rBearingInnerLM12LUU:0;

function getRBearingRodMask(prmBearingType) = getRBearingInner(prmBearingType) + 1.0;

function getNrOfBearingsPerRod(prmBearingType) = (prmBearingType==LM6UU)?nrOfBearingsPerRodLM6UU:(prmBearingType==LM8UU)?nrOfBearingsPerRodLM8UU:(prmBearingType==LM10UU)?nrOfBearingsPerRodLM10UU:(prmBearingType==LM12UU)?nrOfBearingsPerRodLM12UU:(prmBearingType==LM6LUU)?nrOfBearingsPerRodLM6LUU:(prmBearingType==LM8LUU)?nrOfBearingsPerRodLM8LUU:(prmBearingType==LM10LUU)?nrOfBearingsPerRodLM10LUU:(prmBearingType==LM12LUU)?nrOfBearingsPerRodLM12LUU:0;

function getUseBearingSelfAlignment(prmBearingType) = (prmBearingType==LM6UU)?useSelfAlignmentLM6UU:(prmBearingType==LM8UU)?useSelfAlignmentLM8UU:(prmBearingType==LM10UU)?useSelfAlignmentLM10UU:(prmBearingType==LM12UU)?useSelfAlignmentLM12UU:(prmBearingType==LM6LUU)?useSelfAlignmentLM6LUU:(prmBearingType==LM8LUU)?useSelfAlignmentLM8LUU:(prmBearingType==LM10LUU)?useSelfAlignmentLM10LUU:(prmBearingType==LM12LUU)?useSelfAlignmentLM12LUU:false;
