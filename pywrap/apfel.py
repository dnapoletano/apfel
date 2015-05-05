# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.5
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_apfel', [dirname(__file__)])
        except ImportError:
            import _apfel
            return _apfel
        if fp is not None:
            try:
                _mod = imp.load_module('_apfel', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _apfel = swig_import_helper()
    del swig_import_helper
else:
    import _apfel
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0


class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _apfel.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _apfel.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _apfel.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _apfel.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _apfel.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _apfel.SwigPyIterator_equal(self, x)

    def copy(self):
        return _apfel.SwigPyIterator_copy(self)

    def next(self):
        return _apfel.SwigPyIterator_next(self)

    def __next__(self):
        return _apfel.SwigPyIterator___next__(self)

    def previous(self):
        return _apfel.SwigPyIterator_previous(self)

    def advance(self, n):
        return _apfel.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _apfel.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _apfel.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _apfel.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _apfel.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _apfel.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _apfel.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _apfel.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)


def InitializeAPFEL():
    return _apfel.InitializeAPFEL()
InitializeAPFEL = _apfel.InitializeAPFEL

def EvolveAPFEL(Q0, Q):
    return _apfel.EvolveAPFEL(Q0, Q)
EvolveAPFEL = _apfel.EvolveAPFEL

def DeriveAPFEL(Q):
    return _apfel.DeriveAPFEL(Q)
DeriveAPFEL = _apfel.DeriveAPFEL

def xPDF(i, x):
    return _apfel.xPDF(i, x)
xPDF = _apfel.xPDF

def dxPDF(i, x):
    return _apfel.dxPDF(i, x)
dxPDF = _apfel.dxPDF

def xPDFj(i, x):
    return _apfel.xPDFj(i, x)
xPDFj = _apfel.xPDFj

def xgamma(x):
    return _apfel.xgamma(x)
xgamma = _apfel.xgamma

def xgammaj(x):
    return _apfel.xgammaj(x)
xgammaj = _apfel.xgammaj

def dxgamma(x):
    return _apfel.dxgamma(x)
dxgamma = _apfel.dxgamma

def xPDFall(x, xf):
    return _apfel.xPDFall(x, xf)
xPDFall = _apfel.xPDFall

def xLepton(i, x):
    return _apfel.xLepton(i, x)
xLepton = _apfel.xLepton

def xLeptonj(i, x):
    return _apfel.xLeptonj(i, x)
xLeptonj = _apfel.xLeptonj

def ExternalEvolutionOperator(fname, i, j, x, beta):
    return _apfel.ExternalEvolutionOperator(fname, i, j, x, beta)
ExternalEvolutionOperator = _apfel.ExternalEvolutionOperator

def LHAPDFgrid(Nrep, Qin, fname):
    return _apfel.LHAPDFgrid(Nrep, Qin, fname)
LHAPDFgrid = _apfel.LHAPDFgrid

def LHAPDFgridDerivative(Nrep, fname):
    return _apfel.LHAPDFgridDerivative(Nrep, fname)
LHAPDFgridDerivative = _apfel.LHAPDFgridDerivative

def AlphaQCD(Q):
    return _apfel.AlphaQCD(Q)
AlphaQCD = _apfel.AlphaQCD

def AlphaQED(Q):
    return _apfel.AlphaQED(Q)
AlphaQED = _apfel.AlphaQED

def HeavyQuarkMass(arg1, arg2):
    return _apfel.HeavyQuarkMass(arg1, arg2)
HeavyQuarkMass = _apfel.HeavyQuarkMass

def NPDF(i, N):
    return _apfel.NPDF(i, N)
NPDF = _apfel.NPDF

def Ngamma(N):
    return _apfel.Ngamma(N)
Ngamma = _apfel.Ngamma

def LUMI(i, j, S):
    return _apfel.LUMI(i, j, S)
LUMI = _apfel.LUMI

def xGrid(alpha):
    return _apfel.xGrid(alpha)
xGrid = _apfel.xGrid

def nIntervals():
    return _apfel.nIntervals()
nIntervals = _apfel.nIntervals

def GetVersion():
    return _apfel.GetVersion()
GetVersion = _apfel.GetVersion

def CleanUp():
    return _apfel.CleanUp()
CleanUp = _apfel.CleanUp

def EnableWelcomeMessage(arg1):
    return _apfel.EnableWelcomeMessage(arg1)
EnableWelcomeMessage = _apfel.EnableWelcomeMessage

def EnableEvolutionOperator(arg1):
    return _apfel.EnableEvolutionOperator(arg1)
EnableEvolutionOperator = _apfel.EnableEvolutionOperator

def EnableLeptonEvolution(arg1):
    return _apfel.EnableLeptonEvolution(arg1)
EnableLeptonEvolution = _apfel.EnableLeptonEvolution

def LockGrids(arg1):
    return _apfel.LockGrids(arg1)
LockGrids = _apfel.LockGrids

def SetTimeLikeEvolution(arg1):
    return _apfel.SetTimeLikeEvolution(arg1)
SetTimeLikeEvolution = _apfel.SetTimeLikeEvolution

def SetFastEvolution(arg1):
    return _apfel.SetFastEvolution(arg1)
SetFastEvolution = _apfel.SetFastEvolution

def EnableMassRunning(arg1):
    return _apfel.EnableMassRunning(arg1)
EnableMassRunning = _apfel.EnableMassRunning

def SetSmallxResummation(arg1, la):
    return _apfel.SetSmallxResummation(arg1, la)
SetSmallxResummation = _apfel.SetSmallxResummation

def SetAlphaQCDRef(alpharef, Qref):
    return _apfel.SetAlphaQCDRef(alpharef, Qref)
SetAlphaQCDRef = _apfel.SetAlphaQCDRef

def SetAlphaQEDRef(alpharef, Qref):
    return _apfel.SetAlphaQEDRef(alpharef, Qref)
SetAlphaQEDRef = _apfel.SetAlphaQEDRef

def SetAlphaEvolution(evol):
    return _apfel.SetAlphaEvolution(evol)
SetAlphaEvolution = _apfel.SetAlphaEvolution

def SetLambdaQCDRef(lambdaref, nref):
    return _apfel.SetLambdaQCDRef(lambdaref, nref)
SetLambdaQCDRef = _apfel.SetLambdaQCDRef

def SetPDFEvolution(evolp):
    return _apfel.SetPDFEvolution(evolp)
SetPDFEvolution = _apfel.SetPDFEvolution

def SetEpsilonTruncation(eps):
    return _apfel.SetEpsilonTruncation(eps)
SetEpsilonTruncation = _apfel.SetEpsilonTruncation

def SetQLimits(Qmin, Qmax):
    return _apfel.SetQLimits(Qmin, Qmax)
SetQLimits = _apfel.SetQLimits

def SetFFNS(nfl):
    return _apfel.SetFFNS(nfl)
SetFFNS = _apfel.SetFFNS

def SetGridParameters(i, np, deg, x):
    return _apfel.SetGridParameters(i, np, deg, x)
SetGridParameters = _apfel.SetGridParameters

def SetLHgridParameters(nx, nxm, xmin, xm, xmax, nq2, q2min, q2max):
    return _apfel.SetLHgridParameters(nx, nxm, xmin, xm, xmax, nq2, q2min, q2max)
SetLHgridParameters = _apfel.SetLHgridParameters

def SetExternalGrid(i, np, deg, x):
    return _apfel.SetExternalGrid(i, np, deg, x)
SetExternalGrid = _apfel.SetExternalGrid

def SetMaxFlavourAlpha(nf):
    return _apfel.SetMaxFlavourAlpha(nf)
SetMaxFlavourAlpha = _apfel.SetMaxFlavourAlpha

def SetMaxFlavourPDFs(nf):
    return _apfel.SetMaxFlavourPDFs(nf)
SetMaxFlavourPDFs = _apfel.SetMaxFlavourPDFs

def SetMSbarMasses(mc, mb, mt):
    return _apfel.SetMSbarMasses(mc, mb, mt)
SetMSbarMasses = _apfel.SetMSbarMasses

def SetNumberOfGrids(n):
    return _apfel.SetNumberOfGrids(n)
SetNumberOfGrids = _apfel.SetNumberOfGrids

def SetPDFSet(name):
    return _apfel.SetPDFSet(name)
SetPDFSet = _apfel.SetPDFSet

def SetPerturbativeOrder(pto):
    return _apfel.SetPerturbativeOrder(pto)
SetPerturbativeOrder = _apfel.SetPerturbativeOrder

def GetPerturbativeOrder():
    return _apfel.GetPerturbativeOrder()
GetPerturbativeOrder = _apfel.GetPerturbativeOrder

def SetPoleMasses(mc, mb, mt):
    return _apfel.SetPoleMasses(mc, mb, mt)
SetPoleMasses = _apfel.SetPoleMasses

def SetTauMass(masst):
    return _apfel.SetTauMass(masst)
SetTauMass = _apfel.SetTauMass

def SetRenFacRatio(ratio):
    return _apfel.SetRenFacRatio(ratio)
SetRenFacRatio = _apfel.SetRenFacRatio

def SetReplica(nr):
    return _apfel.SetReplica(nr)
SetReplica = _apfel.SetReplica

def SetTheory(theory):
    return _apfel.SetTheory(theory)
SetTheory = _apfel.SetTheory

def SetVFNS():
    return _apfel.SetVFNS()
SetVFNS = _apfel.SetVFNS

def ListFunctions():
    return _apfel.ListFunctions()
ListFunctions = _apfel.ListFunctions

def DIS_xsec(x, qi, qf, y, pol, proc, scheme, pto, pdfset, irep, target, proj, F2, F3, FL, sigma):
    return _apfel.DIS_xsec(x, qi, qf, y, pol, proc, scheme, pto, pdfset, irep, target, proj, F2, F3, FL, sigma)
DIS_xsec = _apfel.DIS_xsec

def InitializeAPFEL_DIS():
    return _apfel.InitializeAPFEL_DIS()
InitializeAPFEL_DIS = _apfel.InitializeAPFEL_DIS

def ComputeStructureFunctionsAPFEL(Q0, Q):
    return _apfel.ComputeStructureFunctionsAPFEL(Q0, Q)
ComputeStructureFunctionsAPFEL = _apfel.ComputeStructureFunctionsAPFEL

def SetMassScheme(ms):
    return _apfel.SetMassScheme(ms)
SetMassScheme = _apfel.SetMassScheme

def SetPolarizationDIS(pol):
    return _apfel.SetPolarizationDIS(pol)
SetPolarizationDIS = _apfel.SetPolarizationDIS

def SetProcessDIS(pr):
    return _apfel.SetProcessDIS(pr)
SetProcessDIS = _apfel.SetProcessDIS

def SetProjectileDIS(lept):
    return _apfel.SetProjectileDIS(lept)
SetProjectileDIS = _apfel.SetProjectileDIS

def SetTargetDIS(tar):
    return _apfel.SetTargetDIS(tar)
SetTargetDIS = _apfel.SetTargetDIS

def SelectCharge(selch):
    return _apfel.SelectCharge(selch)
SelectCharge = _apfel.SelectCharge

def ExternalDISOperator(SF, ihq, i, x, beta):
    return _apfel.ExternalDISOperator(SF, ihq, i, x, beta)
ExternalDISOperator = _apfel.ExternalDISOperator

def F2light(x):
    return _apfel.F2light(x)
F2light = _apfel.F2light

def F2charm(x):
    return _apfel.F2charm(x)
F2charm = _apfel.F2charm

def F2bottom(x):
    return _apfel.F2bottom(x)
F2bottom = _apfel.F2bottom

def F2top(x):
    return _apfel.F2top(x)
F2top = _apfel.F2top

def F2total(x):
    return _apfel.F2total(x)
F2total = _apfel.F2total

def FLlight(x):
    return _apfel.FLlight(x)
FLlight = _apfel.FLlight

def FLcharm(x):
    return _apfel.FLcharm(x)
FLcharm = _apfel.FLcharm

def FLbottom(x):
    return _apfel.FLbottom(x)
FLbottom = _apfel.FLbottom

def FLtop(x):
    return _apfel.FLtop(x)
FLtop = _apfel.FLtop

def FLtotal(x):
    return _apfel.FLtotal(x)
FLtotal = _apfel.FLtotal

def F3light(x):
    return _apfel.F3light(x)
F3light = _apfel.F3light

def F3charm(x):
    return _apfel.F3charm(x)
F3charm = _apfel.F3charm

def F3bottom(x):
    return _apfel.F3bottom(x)
F3bottom = _apfel.F3bottom

def F3top(x):
    return _apfel.F3top(x)
F3top = _apfel.F3top

def F3total(x):
    return _apfel.F3total(x)
F3total = _apfel.F3total

def SetZMass(massz):
    return _apfel.SetZMass(massz)
SetZMass = _apfel.SetZMass

def SetWMass(massw):
    return _apfel.SetWMass(massw)
SetWMass = _apfel.SetWMass

def SetProtonMass(massp):
    return _apfel.SetProtonMass(massp)
SetProtonMass = _apfel.SetProtonMass

def SetSinThetaW(sw):
    return _apfel.SetSinThetaW(sw)
SetSinThetaW = _apfel.SetSinThetaW

def SetCKM(vud, vus, vub, vcd, vcs, vcb, vtd, vts, vtb):
    return _apfel.SetCKM(vud, vus, vub, vcd, vcs, vcb, vtd, vts, vtb)
SetCKM = _apfel.SetCKM

def SetGFermi(gf):
    return _apfel.SetGFermi(gf)
SetGFermi = _apfel.SetGFermi

def SetRenQRatio(ratioR):
    return _apfel.SetRenQRatio(ratioR)
SetRenQRatio = _apfel.SetRenQRatio

def SetFacQRatio(ratioF):
    return _apfel.SetFacQRatio(ratioF)
SetFacQRatio = _apfel.SetFacQRatio

def GetZMass():
    return _apfel.GetZMass()
GetZMass = _apfel.GetZMass

def GetWMass():
    return _apfel.GetWMass()
GetWMass = _apfel.GetWMass

def GetProtonMass():
    return _apfel.GetProtonMass()
GetProtonMass = _apfel.GetProtonMass

def GetSinThetaW():
    return _apfel.GetSinThetaW()
GetSinThetaW = _apfel.GetSinThetaW

def GetCKM(u, d):
    return _apfel.GetCKM(u, d)
GetCKM = _apfel.GetCKM

def GetGFermi():
    return _apfel.GetGFermi()
GetGFermi = _apfel.GetGFermi

def GetSIATotalCrossSection(pto, q):
    return _apfel.GetSIATotalCrossSection(pto, q)
GetSIATotalCrossSection = _apfel.GetSIATotalCrossSection

def EnableTargetMassCorrections(arg1):
    return _apfel.EnableTargetMassCorrections(arg1)
EnableTargetMassCorrections = _apfel.EnableTargetMassCorrections

def FKSimulator(x, q, y, i, beta):
    return _apfel.FKSimulator(x, q, y, i, beta)
FKSimulator = _apfel.FKSimulator

def SetFKObservable(obs):
    return _apfel.SetFKObservable(obs)
SetFKObservable = _apfel.SetFKObservable

def GetFKObservable():
    return _apfel.GetFKObservable()
GetFKObservable = _apfel.GetFKObservable

def FKObservables(x, q, y):
    return _apfel.FKObservables(x, q, y)
FKObservables = _apfel.FKObservables

def ComputeFKTables(inputfile, outputpath, Q0, flmap):
    return _apfel.ComputeFKTables(inputfile, outputpath, Q0, flmap)
ComputeFKTables = _apfel.ComputeFKTables

def ComputeHardCrossSectionsDY(datafile, outputfile):
    return _apfel.ComputeHardCrossSectionsDY(datafile, outputfile)
ComputeHardCrossSectionsDY = _apfel.ComputeHardCrossSectionsDY
# This file is compatible with both classic and new-style classes.


