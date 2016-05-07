*     -*-fortran-*-
*
*     Tabutalet values to check APFEL
*
      double precision Q20,Q2(4)
      double precision xlha(9)
      double precision Ref(1049)
      data Q20  / 2.000E+00/
      data Q2   / 1.000E+01, 1.000E+02, 1.000E+03, 1.000E+04/
      data xlha / 1.000E-05, 1.000E-04, 1.000E-03, 1.000E-02, 1.000E-01,
     1            3.000E-01, 5.000E-01, 7.000E-01, 9.000E-01/
      data Ref /
     1    2.4423490E-01,
     1    1.1939781E-03, 7.4861717E-04, 6.8694431E+00, 1.8296601E+00,
     1    2.6569209E+01,
     1    6.0827021E-03, 3.6741251E-03, 4.3116308E+00, 9.8133383E-01,
     1    1.7093887E+01,
     1    3.1543327E-02, 1.8628894E-02, 2.6357727E+00, 4.8337319E-01,
     1    9.8725666E+00,
     1    1.6006637E-01, 9.2862502E-02, 1.5065730E+00, 2.0296283E-01,
     1    4.7528795E+00,
     1    5.9241501E-01, 3.0959971E-01, 4.6977985E-01, 3.8130948E-02,
     1    1.2535306E+00,
     1    5.5324905E-01, 2.2277814E-01, 6.6413051E-02, 4.0531151E-03,
     1    2.1483210E-01,
     1    2.6097650E-01, 7.4582851E-02, 6.2461509E-03, 3.5716027E-04,
     1    2.9824821E-02,
     1    6.2062855E-02, 1.0587318E-02, 2.0330261E-04, 1.2683192E-05,
     1    1.8971361E-03,
     1    2.0653095E-03, 1.1691484E-04, 1.7882233E-07, 1.8758739E-08,
     1    9.0459232E-06,
     1    2.0594905E+00, 6.9849652E-01, 2.0934828E-02, 2.7789218E+00,
     1    3.8773200E-01, 1.0078538E-01, 6.6864827E-04, 4.8918602E-01,
     1    1.2569700E-06, 3.4806895E-08, 0.0000000E+00, 1.2917769E-06,
     1    1.2614432E+00, 3.4814396E-01, 8.8596441E-03, 1.6184468E+00,
     1    2.6652652E-01, 5.5609858E-02, 3.0377616E-04, 3.2244015E-01,
     1    5.5986263E-06, 6.5956566E-08, 0.0000000E+00, 5.6645829E-06,
     1    7.6947297E-01, 1.5117347E-01, 2.7235683E-03, 9.2337001E-01,
     1    1.6782087E-01, 2.7059303E-02, 1.0402975E-04, 1.9498420E-01,
     1    2.4918453E-05, 5.0591161E-08, 0.0000000E+00, 2.4969044E-05,
     1    5.0422590E-01, 5.0222029E-02, 3.2349057E-04, 5.5477142E-01,
     1    9.4541056E-02, 1.0106991E-02, 1.4060518E-05, 1.0466211E-01,
     1    1.0741811E-04,-8.5262738E-08, 0.0000000E+00, 1.0733285E-04,
     1    4.0011870E-01, 4.7457620E-03, 1.4932089E-10, 4.0486446E-01,
     1    3.9492700E-02, 9.0000286E-04, 2.1929505E-12, 4.0392703E-02,
     1    3.5252630E-04,-8.8032541E-08, 0.0000000E+00, 3.5243827E-04,
     1    2.8104407E-01, 3.7752934E-04, 0.0000000E+00, 2.8142160E-01,
     1    1.3918918E-02, 2.6042610E-05, 0.0000000E+00, 1.3944961E-02,
     1    3.4566454E-04,-1.5288992E-08, 0.0000000E+00, 3.4564925E-04,
     1    1.4229088E-01, 5.5270649E-05, 0.0000000E+00, 1.4234615E-01,
     1    3.8772373E-03, 1.4459923E-06, 0.0000000E+00, 3.8786833E-03,
     1    1.8504235E-04,-2.0792701E-09, 0.0000000E+00, 1.8504027E-04,
     1    4.2157619E-02, 3.4563973E-06, 0.0000000E+00, 4.2161075E-02,
     1    5.3040415E-04, 3.3579430E-08, 0.0000000E+00, 5.3043773E-04,
     1    5.4844079E-05,-1.4170518E-10, 0.0000000E+00, 5.4843937E-05,
     1    2.3830673E-03, 1.0829616E-08, 0.0000000E+00, 2.3830781E-03,
     1    6.6103255E-06, 2.2024757E-11, 0.0000000E+00, 6.6103475E-06,
     1    3.0378016E-06,-6.7425773E-13, 0.0000000E+00, 3.0378009E-06,
     1    6.3809126E+00, 4.2626545E+00, 1.4353922E-03, 1.0645003E+01,
     1    1.1712860E+00, 1.2549386E+00, 1.2355741E-03, 2.4274602E+00,
     1    3.5987734E-02,-5.9769052E-01, 3.1265072E-04,-5.6139013E-01,
     1    3.9482026E+00, 2.3788644E+00, 7.5838397E-04, 6.3278254E+00,
     1    8.0712667E-01, 7.8442749E-01, 6.6547090E-04, 1.5922196E+00,
     1    4.0747991E-02,-3.8137953E-01, 1.9240173E-04,-3.4043913E-01,
     1    2.4531589E+00, 1.2247901E+00, 3.0139783E-04, 3.6782505E+00,
     1    5.1125181E-01, 4.4309435E-01, 2.7655957E-04, 9.5462272E-01,
     1    8.7171086E-02,-2.4389025E-01, 1.0472897E-04,-1.5661443E-01,
     1    1.6886706E+00, 5.3920137E-01, 4.0024964E-05, 2.2279120E+00,
     1    2.9532321E-01, 2.0403546E-01, 4.6877507E-05, 4.9940555E-01,
     1    3.0480182E-01,-1.5070692E-01, 4.5276045E-05, 1.5414018E-01,
     1    1.5161421E+00, 1.0847781E-01, 1.1810561E-05, 1.6246317E+00,
     1    1.3985244E-01, 3.8454275E-02, 7.1496061E-06, 1.7831386E-01,
     1    9.7718174E-01,-5.0825372E-02, 8.1637916E-06, 9.2636454E-01,
     1    1.1375408E+00, 1.0131694E-02, 1.2078257E-07, 1.1476726E+00,
     1    5.5052592E-02, 3.2847522E-03, 7.6736882E-08, 5.8337421E-02,
     1    1.0037777E+00,-5.8358156E-03, 4.0344282E-08, 9.9794194E-01,
     1    5.9394339E-01, 5.1837492E-04, 0.0000000E+00, 5.9446176E-01,
     1    1.6043430E-02, 1.7782481E-04, 0.0000000E+00, 1.6221255E-02,
     1    5.6706427E-01,-2.7046121E-04, 0.0000000E+00, 5.6679380E-01,
     1    1.8068586E-01, 7.2873172E-06, 0.0000000E+00, 1.8069314E-01,
     1    2.2592415E-03, 2.4728276E-06, 0.0000000E+00, 2.2617143E-03,
     1    1.7785558E-01,-8.3377558E-07, 0.0000000E+00, 1.7785474E-01,
     1    1.0488215E-02, 1.5642538E-08, 0.0000000E+00, 1.0488231E-02,
     1    2.8882177E-05, 1.4882999E-09, 0.0000000E+00, 2.8883665E-05,
     1    1.0458272E-02,-3.7724368E-09, 0.0000000E+00, 1.0458268E-02,
     1    1.7629258E-01,
     1    1.9543183E-03, 1.2170087E-03, 1.4806528E+01, 5.8490108E+00,
     1    7.8580605E+01,
     1    9.1799424E-03, 5.4940530E-03, 7.9704030E+00, 2.8510592E+00,
     1    4.0310890E+01,
     1    4.3140578E-02, 2.5162015E-02, 4.0486044E+00, 1.2231585E+00,
     1    1.8078908E+01,
     1    1.9233920E-01, 1.0966555E-01, 1.8562251E+00, 4.1240147E-01,
     1    6.4107237E+00,
     1    5.8096789E-01, 2.9533165E-01, 4.3847091E-01, 5.5022647E-02,
     1    1.1043959E+00,
     1    4.5614935E-01, 1.7699822E-01, 5.0622586E-02, 4.4564452E-03,
     1    1.4036128E-01,
     1    1.8726070E-01, 5.1269116E-02, 4.0970620E-03, 3.2023574E-04,
     1    1.6309903E-02,
     1    3.7926508E-02, 6.1699628E-03, 1.1336474E-04, 9.2428587E-06,
     1    9.1898327E-04,
     1    9.4802103E-04, 5.0996553E-05, 7.7634472E-08, 1.0361169E-08,
     1    3.9205085E-06,
     1    4.5872201E+00, 2.3826888E+00, 2.2556964E-01, 7.1955098E+00,
     1    8.6474850E-01, 4.7755109E-01, 3.4647583E-02, 1.3769472E+00,
     1    1.7461786E-05, 8.7351358E-07, 5.6260731E-08, 1.8391560E-05,
     1    2.4377181E+00, 1.1347966E+00, 9.8438659E-02, 3.6709538E+00,
     1    4.5666174E-01, 2.3841218E-01, 1.5973961E-02, 7.1104788E-01,
     1    7.4979198E-05, 1.5346567E-06, 9.8854850E-08, 7.6612710E-05,
     1    1.2386363E+00, 4.7278258E-01, 3.5939972E-02, 1.7473589E+00,
     1    2.1343734E-01, 1.0277826E-01, 6.1976100E-03, 3.2241321E-01,
     1    3.1937017E-04, 9.2574515E-07, 5.9794248E-08, 3.2035571E-04,
     1    6.4232267E-01, 1.5221267E-01, 8.8700800E-03, 8.0340542E-01,
     1    8.3362787E-02, 3.3259183E-02, 1.6558318E-03, 1.1827780E-01,
     1    1.2891677E-03,-2.1877990E-06,-1.4107481E-07, 1.2868389E-03,
     1    3.9953422E-01, 1.7926495E-02, 4.4103858E-04, 4.1790175E-01,
     1    2.3015118E-02, 3.4621551E-03, 7.8863277E-05, 2.6556136E-02,
     1    3.6361873E-03,-1.6906669E-06,-1.0915756E-07, 3.6343874E-03,
     1    2.3548305E-01, 1.2855135E-03, 1.6063331E-05, 2.3678463E-01,
     1    6.7723058E-03, 1.5720966E-04, 1.0877615E-06, 6.9306032E-03,
     1    2.9297797E-03,-2.3934967E-07,-1.5446670E-08, 2.9295249E-03,
     1    9.9682234E-02, 9.0671723E-05, 1.7070439E-06, 9.9774613E-02,
     1    1.6324697E-03, 5.3675565E-06, 4.3379294E-08, 1.6378807E-03,
     1    1.2934507E-03,-2.7217428E-08,-1.7566886E-09, 1.2934217E-03,
     1    2.3351335E-02, 2.8657323E-06, 9.1040626E-08, 2.3354292E-02,
     1    1.8681879E-04, 4.8393870E-08, 8.9481858E-10, 1.8686808E-04,
     1    3.0118358E-04,-1.4819718E-09,-9.5727908E-11, 3.0118200E-04,
     1    8.6118988E-04, 4.7775598E-09, 3.7294099E-10, 8.6119503E-04,
     1    1.6953720E-06, 8.1744119E-12, 7.4136701E-13, 1.6953809E-06,
     1    1.0861140E-05,-5.0331800E-12,-3.0335573E-13, 1.0861134E-05,
     1    1.3949463E+01, 1.1785073E+01, 1.0136493E-02, 2.6476985E+01,
     1    2.5928255E+00, 2.4665728E+00, 2.9365866E-03, 5.7717976E+00,
     1    3.7605326E-02,-7.0380470E-01, 5.1610224E-03,-6.8746172E-01,
     1    7.4689764E+00, 5.8293216E+00, 4.7546058E-03, 1.3443694E+01,
     1    1.3716795E+00, 1.2788496E+00, 1.4645322E-03, 2.7854725E+00,
     1    4.6145183E-02,-4.9998922E-01, 2.5629733E-03,-4.5737183E-01,
     1    3.8589381E+00, 2.5810908E+00, 1.9226804E-03, 6.4431388E+00,
     1    6.4425560E-01, 5.7655613E-01, 6.2073046E-04, 1.2223816E+00,
     1    1.0692867E-01,-3.3350539E-01, 1.1169103E-03,-2.2557019E-01,
     1    2.1103457E+00, 9.3457408E-01, 5.8015537E-04, 3.0455000E+00,
     1    2.5793496E-01, 1.9922744E-01, 1.8917915E-04, 4.5735159E-01,
     1    3.6687024E-01,-1.9890682E-01, 3.8614550E-04, 1.6834956E-01,
     1    1.5115101E+00, 1.5243604E-01, 7.2060957E-05, 1.6640182E+00,
     1    8.2006999E-02, 2.4842795E-02, 1.8716351E-05, 1.0686851E-01,
     1    1.0243463E+00,-6.2482034E-02, 6.4801148E-05, 9.6192908E-01,
     1    9.5609165E-01, 1.5281490E-02, 1.4364895E-05, 9.7138751E-01,
     1    2.6888050E-02, 1.5783317E-03, 2.5664990E-06, 2.8468948E-02,
     1    8.6829915E-01,-8.6117758E-03, 1.2653233E-05, 8.5970002E-01,
     1    4.1772914E-01, 1.2360642E-03, 3.4980509E-06, 4.1896870E-01,
     1    6.7339234E-03, 8.5433031E-05, 6.0241760E-07, 6.8199589E-03,
     1    4.0436407E-01,-7.7112526E-04, 2.8768909E-06, 4.0359582E-01,
     1    1.0041649E-01, 3.5129296E-05, 2.5534562E-07, 1.0045187E-01,
     1    7.8937645E-04, 1.6827364E-06, 3.9045221E-08, 7.9109823E-04,
     1    9.9360171E-02,-2.1650863E-05, 2.1266987E-07, 9.9338733E-02,
     1    3.7949802E-03, 2.0090621E-08, 5.2409256E-09, 3.7950056E-03,
     1    7.3127491E-06, 7.3249636E-10, 3.2251239E-11, 7.3135138E-06,
     1    3.7873462E-03,-5.5514040E-09, 5.2031804E-09, 3.7873458E-03,
     1    1.3946000E-01,
     1    2.6049852E-03, 1.6071429E-03, 2.4248767E+01, 1.0605408E+01,
     1    1.4503982E+02,
     1    1.1757332E-02, 6.9808498E-03, 1.1785767E+01, 4.7868086E+00,
     1    6.4687017E+01,
     1    5.2301141E-02, 3.0258958E-02, 5.3033249E+00, 1.8740187E+00,
     1    2.4803849E+01,
     1    2.1502319E-01, 1.2124782E-01, 2.1001487E+00, 5.5913722E-01,
     1    7.2867600E+00,
     1    5.6564926E-01, 2.8214895E-01, 4.1022493E-01, 6.1829516E-02,
     1    9.6488140E-01,
     1    3.9249355E-01, 1.4841404E-01, 4.1105402E-02, 4.2967073E-03,
     1    1.0187430E-01,
     1    1.4571928E-01, 3.8717977E-02, 2.9929179E-03, 2.7568484E-04,
     1    1.0638909E-02,
     1    2.6261720E-02, 4.1331540E-03, 7.3936118E-05, 7.1130585E-06,
     1    5.5230862E-04,
     1    5.3314266E-04, 2.7679002E-05, 4.2191011E-08, 6.5098034E-09,
     1    2.0201985E-06,
     1    7.7470074E+00, 4.4904697E+00, 7.7814002E-01, 1.3017394E+01,
     1    1.2752557E+00, 8.0876329E-01, 1.6246200E-01, 2.2464856E+00,
     1    1.9803476E-04, 1.0079921E-05, 1.4509046E-06, 2.0956559E-04,
     1    3.7323919E+00, 2.0078687E+00, 3.3041253E-01, 6.0709688E+00,
     1    5.7735955E-01, 3.5851674E-01, 7.0261943E-02, 1.0061391E+00,
     1    8.3286585E-04, 1.6690939E-05, 2.4031470E-06, 8.5195994E-04,
     1    1.6817042E+00, 7.7710084E-01, 1.1883854E-01, 2.5776543E+00,
     1    2.2662918E-01, 1.3488701E-01, 2.5614541E-02, 3.8713077E-01,
     1    3.4417941E-03, 8.0597886E-06, 1.1641733E-06, 3.4510181E-03,
     1    7.4993024E-01, 2.2760535E-01, 3.0577134E-02, 1.0081127E+00,
     1    7.1679719E-02, 3.6925911E-02, 6.6722643E-03, 1.1527789E-01,
     1    1.3174318E-02,-2.5111462E-05,-3.6195888E-06, 1.3145587E-02,
     1    3.9474499E-01, 2.4136404E-02, 2.4126554E-03, 4.2129405E-01,
     1    1.5766307E-02, 3.1768151E-03, 5.0092856E-04, 1.9444050E-02,
     1    3.2975453E-02,-1.6078999E-05,-2.3203372E-06, 3.2957053E-02,
     1    2.0519465E-01, 1.6471276E-03, 1.1670844E-04, 2.0695848E-01,
     1    4.1316134E-03, 1.4717648E-04, 1.7905879E-05, 4.2966958E-03,
     1    2.3178968E-02,-1.9906137E-06,-2.8718781E-07, 2.3176690E-02,
     1    7.6982613E-02, 1.0759331E-04, 5.7120851E-06, 7.7095919E-02,
     1    8.9435134E-04, 6.2381393E-06, 5.1952056E-07, 9.0110900E-04,
     1    9.0214473E-03,-2.0130338E-07,-2.9055361E-08, 9.0212170E-03,
     1    1.5442864E-02, 2.8898529E-06, 1.3403746E-07, 1.5445888E-02,
     1    8.9673381E-05, 9.4260397E-08, 3.7479465E-09, 8.9771389E-05,
     1    1.7967167E-03,-9.4424525E-09,-1.3649184E-09, 1.7967059E-03,
     1    4.2601064E-04, 2.7624546E-09, 2.5636848E-10, 4.2601366E-04,
     1    6.4491599E-07, 1.9906464E-11, 4.8945410E-13, 6.4493638E-07,
     1    4.8568508E-05,-2.2214659E-11,-3.2698574E-12, 4.8568483E-05,
     1    2.3098051E+01, 2.0940626E+01, 2.8707392E-02, 4.5333838E+01,
     1    3.7730549E+00, 3.6811354E+00, 5.7963902E-03, 8.6916468E+00,
     1    3.8689484E-02,-7.9082495E-01, 5.5641643E-03,-1.0072966E+00,
     1    1.1195112E+01, 9.5700941E+00, 1.2595538E-02, 2.1127479E+01,
     1    1.7105577E+00, 1.6477222E+00, 2.5688536E-03, 3.7005096E+00,
     1    5.0568195E-02,-5.4629045E-01, 2.7127984E-03,-5.7741089E-01,
     1    5.1206004E+00, 3.8531878E+00, 4.7497844E-03, 9.0217689E+00,
     1    6.7445153E-01, 6.2862688E-01, 9.6370947E-04, 1.3458103E+00,
     1    1.2311068E-01,-3.5263241E-01, 1.1694577E-03,-2.4440463E-01,
     1    2.4112419E+00, 1.2301538E+00, 1.3362007E-03, 3.6425269E+00,
     1    2.1895355E-01, 1.7659676E-01, 2.6156092E-04, 3.9560246E-01,
     1    4.1168892E-01,-2.0167864E-01, 4.0449769E-04, 2.1021855E-01,
     1    1.4786946E+00, 1.6710498E-01, 1.4375052E-04, 1.6459433E+00,
     1    5.6425435E-02, 1.6266201E-02, 2.2565098E-05, 7.2714200E-02,
     1    1.0280891E+00,-5.7605757E-02, 6.7619646E-05, 9.7055093E-01,
     1    8.2805427E-01, 1.4633720E-02, 1.8123156E-05, 8.4270611E-01,
     1    1.6542263E-02, 8.1659065E-04, 1.3551291E-06, 1.7360209E-02,
     1    7.6191324E-01,-7.1580973E-03, 1.3974373E-05, 7.5476911E-01,
     1    3.2111501E-01, 1.0886448E-03, 4.3747924E-06, 3.2220803E-01,
     1    3.7195984E-03, 3.7364417E-05, 1.5850507E-07, 3.7571214E-03,
     1    3.1273993E-01,-6.0336130E-04, 4.0651265E-06, 3.1214063E-01,
     1    6.6184515E-02, 3.0044907E-05, 7.5554477E-07, 6.6215316E-02,
     1    3.8186427E-04, 6.3857825E-07, 1.9202385E-08, 3.8252205E-04,
     1    6.5644497E-02,-1.7166987E-05, 7.3212430E-07, 6.5628062E-02,
     1    1.8746403E-03, 2.2419888E-08, 1.4129223E-08, 1.8746769E-03,
     1    2.7962558E-06, 2.6933591E-10, 2.5613864E-10, 2.7967813E-06,
     1    1.8716987E-03,-1.0612094E-08, 1.3862855E-08, 1.8717020E-03,
     1    1.1560477E-01,
     1    3.1910369E-03, 1.9533611E-03, 3.4738015E+01, 1.5877265E+01,
     1    2.2015477E+02,
     1    1.4024482E-02, 8.2755458E-03, 1.5619104E+01, 6.7251864E+00,
     1    8.8814547E+01,
     1    6.0021681E-02, 3.4520394E-02, 6.4176790E+00, 2.4495510E+00,
     1    3.0406445E+01,
     1    2.3243751E-01, 1.2999692E-01, 2.2778715E+00, 6.6749973E-01,
     1    7.7916048E+00,
     1    5.4992166E-01, 2.7034858E-01, 3.8524978E-01, 6.4461908E-02,
     1    8.5264050E-01,
     1    3.4621744E-01, 1.2832669E-01, 3.4599029E-02, 4.0128322E-03,
     1    7.8895811E-02,
     1    1.1867978E-01, 3.0810895E-02, 2.3197467E-03, 2.3747322E-04,
     1    7.6397915E-03,
     1    1.9489775E-02, 2.9899185E-03, 5.2389732E-05, 5.6204747E-06,
     1    3.7081850E-04,
     1    3.3522326E-04, 1.6933250E-05, 2.5449833E-08, 4.1941586E-09,
     1    1.1722634E-06,
     1    1.3889842E+01, 7.5068373E+00, 2.1054210E+00, 2.3562243E+01,
     1    1.9676084E+00, 1.1387827E+00, 3.7573781E-01, 3.4835468E+00,
     1    1.2170509E-03, 5.8420110E-05, 1.0326113E-05, 1.2857971E-03,
     1    6.1966463E+00, 3.1621829E+00, 8.5056076E-01, 1.0225619E+01,
     1    7.9919566E-01, 4.5664687E-01, 1.4910330E-01, 1.4053470E+00,
     1    5.0371836E-03, 9.2099108E-05, 1.6285312E-05, 5.1455680E-03,
     1    2.5438164E+00, 1.1442684E+00, 2.8963129E-01, 3.9804832E+00,
     1    2.7705328E-01, 1.5328026E-01, 4.9322361E-02, 4.7972966E-01,
     1    2.0307239E-02, 3.5564833E-05, 6.3126216E-06, 2.0349117E-02,
     1    1.0037447E+00, 3.0861928E-01, 7.0314055E-02, 1.3827753E+00,
     1    7.5197323E-02, 3.6461517E-02, 1.1463903E-02, 1.2312549E-01,
     1    7.4363576E-02,-1.4373094E-04,-2.5444498E-05, 7.4194401E-02,
     1    4.4968336E-01, 2.9285208E-02, 5.4260779E-03, 4.8439465E-01,
     1    1.3699397E-02, 2.5796158E-03, 7.7898278E-04, 1.7057996E-02,
     1    1.6883239E-01,-7.9930578E-05,-1.4164389E-05, 1.6873829E-01,
     1    2.0734846E-01, 1.8393461E-03, 2.8211685E-04, 2.0946992E-01,
     1    3.1861637E-03, 1.0665417E-04, 3.0807438E-05, 3.3236253E-03,
     1    1.0656807E-01,-8.9347243E-06,-1.5826479E-06, 1.0655755E-01,
     1    7.0119827E-02, 1.1233854E-04, 1.5023462E-05, 7.0247189E-02,
     1    6.2402985E-04, 4.3480668E-06, 1.1948174E-06, 6.2957273E-04,
     1    3.7636203E-02,-8.2713782E-07,-1.4648844E-07, 3.7635230E-02,
     1    1.2393693E-02, 2.7762413E-06, 3.3555116E-07, 1.2396805E-02,
     1    5.5720165E-05, 6.5942228E-08, 1.6678934E-08, 5.5802786E-05,
     1    6.6516789E-03,-3.4750479E-08,-6.1467510E-09, 6.6516380E-03,
     1    2.7177801E-04, 2.2216008E-09, 2.7686659E-10, 2.7178051E-04,
     1    3.2924795E-07, 1.2861359E-11, 2.8278247E-12, 3.2926364E-07,
     1    1.4413604E-04,-6.6839801E-11,-1.1871864E-11, 1.4413596E-04,
     1    3.3342349E+01, 3.1193454E+01, 4.7283911E-02, 6.6048404E+01,
     1    4.6942656E+00, 4.6278687E+00, 7.7676945E-03, 1.0684782E+01,
     1    3.9604747E-02,-8.0815130E-01, 5.0715753E-03,-4.6464544E+00,
     1    1.4966874E+01, 1.3356735E+01, 1.9561872E-02, 2.8767721E+01,
     1    1.9094424E+00, 1.8631174E+00, 3.1057896E-03, 4.1797911E+00,
     1    5.4502032E-02,-5.4996477E-01, 2.4866715E-03,-1.9396349E+00,
     1    6.2484780E+00, 4.9893054E+00, 6.9031670E-03, 1.1317516E+01,
     1    6.6533450E-01, 6.3019074E-01, 1.0376745E-03, 1.3723945E+00,
     1    1.3708196E-01,-3.5026277E-01, 1.0787343E-03,-6.3594094E-01,
     1    2.6352018E+00, 1.4491889E+00, 1.7917598E-03, 4.0828285E+00,
     1    1.8655916E-01, 1.5271406E-01, 2.4499675E-04, 3.3935428E-01,
     1    4.4673934E-01,-1.9641369E-01, 3.7345860E-04, 1.8388505E-01,
     1    1.4380267E+00, 1.7105854E-01, 1.7134604E-04, 1.6090850E+00,
     1    4.1816530E-02, 1.1393091E-02, 1.7476265E-05, 5.3101719E-02,
     1    1.0179063E+00,-5.2118484E-02, 6.0754697E-05, 9.6556061E-01,
     1    7.3198798E-01, 1.3296356E-02, 1.8170035E-05, 7.4530250E-01,
     1    1.1249557E-02, 4.9314291E-04, 8.5071318E-07, 1.1743550E-02,
     1    6.7906785E-01,-5.8394282E-03, 1.2235306E-05, 6.7324066E-01,
     1    2.5897715E-01, 9.0102082E-04, 3.7727754E-06, 2.5988194E-01,
     1    2.3217029E-03, 2.0513783E-05, 6.3382729E-08, 2.3422801E-03,
     1    2.5315088E-01,-4.4842226E-04, 3.4268072E-06, 2.5270588E-01,
     1    4.7489241E-02, 2.2601266E-05, 6.0484985E-07, 4.7512447E-02,
     1    2.1460046E-04, 3.1807769E-07, 4.2467565E-09, 2.1492278E-04,
     1    4.7169804E-02,-1.1505226E-05, 5.9394516E-07, 4.7158893E-02,
     1    1.0794026E-03, 1.5262889E-08, 1.2987111E-08, 1.0794309E-03,
     1    1.3038980E-06, 1.0903165E-10, 3.9971478E-11, 1.3040470E-06,
     1    1.0780208E-03,-6.4396299E-09, 1.2941122E-08, 1.0780273E-03,
     1    0.0000000E+00/
