// Max-Planck-Institute Saarbruecken (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
//
// Author(s)     : Michael Hemmer

#include <CGAL/basic.h>
#include <CGAL/primes.h>

namespace CGAL { 
namespace internal {

int primes [2000] = {
    67111067,67111043,67111027,67111013,67110947,67110943,67110931,67110929,67110889,67110881,67110853,67110851,67110847,67110839,67110829,67110817,67110779,67110739,67110733,67110709,67110677,67110661,67110653,67110647,67110613,67110607,67110601,67110599,67110569,67110559,67110557,67110551,67110541,67110521,67110497,67110493,67110479,67110469,67110467,67110457,67110419,67110391,67110377,67110367,67110353,67110331,67110311,67110301,67110283,67110269,67110259,67110247,67110221,67110209,67110191,67110167,67110161,67110151,67110149,67110139,67110107,67110091,67110083,67110077,67110073,67110023,67110013,67110007,67109969,67109941,67109923,67109773,67109759,67109747,67109737,67109723,67109701,67109687,67109671,67109663,67109633,67109629,67109593,67109573,67109563,67109543,67109519,67109507,67109479,67109443,67109431,67109417,67109407,67109363,67109323,67109321,67109299,67109291,67109281,67109269,67109243,67109233,67109227,67109221,67109209,67109201,67109191,67109177,67109171,67109167,67109131,67109123,67109071,67109051,67109033,67109023,67108981,67108961,67108957,67108933,67108919,67108913,67108879,67108859,67108837,67108819,67108777,67108763,67108757,67108753,67108747,67108739,67108729,67108721,67108709,67108693,67108669,67108667,67108661,67108649,67108633,67108597,67108579,67108529,67108511,67108507,67108493,67108471,67108463,67108453,67108439,67108387,67108373,67108369,67108351,67108331,67108313,67108303,67108289,67108271,67108219,67108207,67108201,67108199,67108187,67108183,67108177,67108127,67108109,67108081,67108049,67108039,67108037,67108033,67108009,67108007,67108003,67107983,67107977,67107967,67107941,67107919,67107913,67107883,67107881,67107871,67107863,67107809,67107797,67107793,67107787,67107773,67107757,67107749,67107739,67107737,67107713,67107707,67107697,67107673,67107643,67107641,67107631,67107617,67107569,67107553,67107541,67107539,67107533,67107527,67107499,67107497,67107473,67107463,67107461,67107457,67107427,67107389,67107349,67107331,67107323,67107319,67107317,67107311,67107301,67107289,67107253,67107241,67107223,67107217,67107203,67107191,67107151,67107149,67107101,67107097,67107071,67107043,67106989,67106987,67106983,67106903,67106833,67106821,67106813,67106797,67106761,67106749,67106737,67106719,67106717,67106693,67106687,67106657,67106591,67106587,67106561,67106539,67106503,67106483,67106477,67106447,67106407,67106399,67106393,67106383,67106357,67106339,67106323,67106311,67106279,67106257,67106243,67106239,67106231,67106213,67106189,67106167,67106159,67106113,67106107,67106099,67106093,67106063,67106059,67106033,67106023,67105991,67105963,67105949,67105943,67105937,67105933,67105903,67105879,67105877,67105873,67105867,67105849,67105837,67105823,67105811,67105781,67105771,67105769,67105763,67105729,67105711,67105699,67105691,67105609,67105567,67105553,67105517,67105501,67105487,67105481,67105471,67105459,67105453,67105439,67105399,67105393,67105373,67105369,67105349,67105319,67105303,67105267,67105249,67105219,67105211,67105201,67105193,67105187,67105141,67105133,67105127,67105091,67105081,67105061,67104997,67104991,67104977,67104949,67104931,67104923,67104913,67104907,67104901,67104893,67104883,67104871,67104859,67104857,67104847,67104841,67104833,67104803,67104769,67104757,67104743,67104707,67104691,67104689,67104679,67104649,67104647,67104617,67104607,67104601,67104589,67104581,67104571,67104563,67104539,67104529,67104517,67104449,67104439,67104437,67104419,67104379,67104361,67104341,67104313,67104293,67104277,67104263,67104251,67104227,67104161,67104139,67104127,67104113,67104073,67104071,67104061,67104053,67104047,67104043,67104031,67104019,67104007,67103983,67103969,67103963,67103909,67103893,67103887,67103867,67103851,67103837,67103821,67103761,67103749,67103737,67103731,67103711,67103689,67103669,67103657,67103653,67103633,67103609,67103587,67103579,67103549,67103513,67103507,67103503,67103483,67103479,67103467,67103431,67103423,67103411,67103389,67103359,67103327,67103321,67103297,67103293,67103273,67103249,67103227,67103219,67103209,67103191,67103173,67103159,67103149,67103147,67103143,67103137,67103107,67103083,67103051,67103039,67103033,67103027,67103021,67103009,67102991,67102969,67102967,67102963,67102949,67102943,67102921,67102913,67102901,67102873,67102843,67102801,67102741,67102733,67102729,67102727,67102703,67102669,67102663,67102657,67102649,67102639,67102627,67102613,67102603,67102561,67102537,67102531,67102499,67102487,67102459,67102457,67102447,67102439,67102397,67102391,67102333,67102331,67102291,67102283,67102249,67102241,67102237,67102223,67102219,67102193,67102181,67102177,67102163,67102159,67102153,67102151,67102099,67102093,67102069,67102067,67102051,67102033,67102031,67102019,67102003,67101997,67101989,67101961,67101919,67101899,67101883,67101877,67101799,67101791,67101779,67101743,67101739,67101691,67101689,67101637,67101631,67101623,67101613,67101607,67101569,67101523,67101509,67101493,67101491,67101479,67101469,67101449,67101443,67101421,67101413,67101361,67101343,67101341,67101323,67101299,67101271,67101263,67101247,67101241,67101191,67101187,67101173,67101169,67101161,67101119,67101109,67101079,67101053,67101043,67100987,67100981,67100977,67100963,67100953,67100947,67100939,67100911,67100909,67100899,67100897,67100861,67100857,67100851,67100849,67100827,67100801,67100791,67100779,67100777,67100773,67100753,67100731,67100713,67100699,67100687,67100681,67100669,67100659,67100653,67100639,67100617,67100599,67100587,67100569,67100531,67100497,67100489,67100459,67100447,67100389,67100357,67100353,67100347,67100329,67100311,67100303,67100281,67100273,67100263,67100261,67100251,67100249,67100239,67100233,67100197,67100179,67100141,67100123,67100101,67100087,67100017,67100009,67099999,67099987,67099957,67099951,67099937,67099931,67099927,67099913,67099889,67099861,67099853,67099831,67099829,67099819,67099801,67099793,67099789,67099783,67099771,67099727,67099699,67099687,67099633,67099589,67099577,67099559,67099547,67099541,67099523,67099517,67099499,67099481,67099457,67099447,67099433,67099399,67099397,67099387,67099369,67099363,67099339,67099321,67099309,67099273,67099271,67099267,67099231,67099223,67099217,67099213,67099199,67099171,67099141,67099133,67099129,67099121,67099111,67099103,67099057,67099037,67099031,67098991,67098971,67098931,67098923,67098917,67098907,67098853,67098851,67098839,67098827,67098821,67098809,67098793,67098769,67098761,67098743,67098739,67098697,67098653,67098637,67098623,67098589,67098529,67098527,67098487,67098463,67098457,67098433,67098419,67098403,67098389,67098377,67098359,67098347,67098341,67098323,67098319,67098313,67098307,67098301,67098299,67098277,67098271,67098259,67098233,67098203,67098197,67098193,67098179,67098151,67098149,67098121,67098091,67098071,67098067,67098049,67098047,67098041,67098029,67098019,67098013,67098007,67098001,67097993,67097977,67097959,67097917,67097903,67097869,67097837,67097819,67097813,67097803,67097749,67097747,67097729,67097707,67097699,67097669,67097659,67097603,67097593,67097579,67097567,67097551,67097543,67097507,67097489,67097447,67097441,67097413,67097383,67097369,67097363,67097339,67097333,67097323,67097321,67097297,67097291,67097281,67097273,67097269,67097267,67097209,67097183,67097179,67097123,67097111,67097087,67097081,67097053,67097047,67096987,67096979,67096973,67096921,67096919,67096907,67096903,67096867,67096837,67096817,67096769,67096751,67096717,67096703,67096697,67096693,67096669,67096663,67096649,67096613,67096607,67096583,67096559,67096553,67096507,67096499,67096487,67096483,67096439,67096423,67096411,67096409,67096387,67096373,67096327,67096319,67096303,67096301,67096291,67096261,67096247,67096243,67096231,67096223,67096177,67096151,67096109,67096103,67096097,67096069,67096067,67096063,67096031,67096021,67096013,67096009,67095989,67095983,67095971,67095929,67095893,67095883,67095869,67095857,67095851,67095799,67095797,67095737,67095733,67095731,67095703,67095701,67095683,67095667,67095659,67095629,67095607,67095559,67095551,67095529,67095521,67095499,67095493,67095487,67095421,67095419,67095407,67095383,67095359,67095349,67095317,67095239,67095227,67095221,67095211,67095199,67095173,67095143,67095139,67095131,67095101,67095079,67095047,67095043,67095037,67095013,67095011,67095001,67094987,67094981,67094969,67094941,67094917,67094899,67094891,67094837,67094831,67094827,67094821,67094809,67094759,67094743,67094723,67094717,67094711,67094707,67094701,67094647,67094639,67094593,67094591,67094581,67094557,67094527,67094513,67094507,67094501,67094497,67094471,67094459,67094437,67094411,67094407,67094389,67094369,67094353,67094351,67094329,67094311,67094309,67094299,67094297,67094281,67094267,67094179,67094177,67094173,67094161,67094143,67094141,67094123,67094119,67094099,67094047,67094039,67094021,67094011,67093993,67093979,67093937,67093933,67093931,67093903,67093861,67093853,67093843,67093841,67093801,67093759,67093757,67093723,67093721,67093699,67093681,67093633,67093627,67093619,67093613,67093603,67093597,67093591,67093547,67093519,67093489,67093471,67093409,67093381,67093349,67093319,67093307,67093303,67093297,67093291,67093267,67093249,67093223,67093183,67093181,67093171,67093163,67093157,67093129,67093121,67093109,67093087,67093079,67093069,67093043,67093031,67093007,67093003,67092997,67092953,67092947,67092911,67092887,67092871,67092869,67092847,67092841,67092821,67092811,67092787,67092757,67092749,67092737,67092721,67092709,67092691,67092673,67092671,67092643,67092637,67092611,67092607,67092589,67092563,67092539,67092521,67092511,67092491,67092461,67092451,67092419,67092407,67092391,67092367,67092331,67092323,67092301,67092271,67092247,67092227,67092203,67092199,67092197,67092143,67092139,67092133,67092119,67092107,67092079,67092071,67092041,67092017,67092001,67091987,67091939,67091933,67091923,67091903,67091873,67091861,67091839,67091833,67091821,67091807,67091803,67091797,67091779,67091771,67091743,67091737,67091729,67091683,67091681,67091677,67091669,67091617,67091611,67091561,67091551,67091543,67091501,67091491,67091477,67091467,67091447,67091443,67091441,67091417,67091407,67091369,67091357,67091351,67091341,67091329,67091317,67091291,67091287,67091251,67091243,67091203,67091159,67091149,67091131,67091113,67091107,67091077,67091041,67091039,67091029,67090999,67090979,67090973,67090939,67090937,67090921,67090871,67090861,67090841,67090783,67090769,67090763,67090759,67090711,67090703,67090693,67090679,67090631,67090627,67090613,67090591,67090589,67090579,67090571,67090567,67090561,67090553,67090549,67090547,67090523,67090519,67090489,67090459,67090451,67090433,67090411,67090403,67090399,67090351,67090343,67090321,67090307,67090271,67090259,67090237,67090229,67090223,67090217,67090207,67090189,67090171,67090151,67090129,67090117,67090099,67090091,67090073,67090061,67090043,67090033,67090031,67090027,67090013,67089989,67089949,67089943,67089907,67089877,67089857,67089839,67089829,67089811,67089809,67089793,67089751,67089739,67089733,67089721,67089707,67089697,67089683,67089619,67089587,67089577,67089541,67089527,67089511,67089479,67089469,67089461,67089377,67089329,67089299,67089287,67089283,67089277,67089271,67089241,67089233,67089223,67089221,67089199,67089097,67089059,67089049,67089047,67089013,67088993,67088969,67088963,67088951,67088939,67088911,67088873,67088849,67088839,67088821,67088797,67088779,67088731,67088719,67088717,67088713,67088711,67088683,67088657,67088653,67088627,67088621,67088603,67088597,67088573,67088561,67088521,67088509,67088501,67088473,67088453,67088429,67088393,67088383,67088381,67088347,67088323,67088311,67088303,67088291,67088279,67088267,67088257,67088249,67088209,67088159,67088149,67088117,67088101,67088093,67088081,67088071,67088059,67088039,67088023,67088011,67087981,67087973,67087961,67087957,67087913,67087901,67087883,67087873,67087871,67087859,67087799,67087781,67087777,67087747,67087723,67087717,67087693,67087681,67087679,67087649,67087637,67087591,67087583,67087571,67087567,67087547,67087529,67087519,67087487,67087483,67087463,67087459,67087451,67087421,67087417,67087381,67087367,67087351,67087277,67087259,67087249,67087243,67087217,67087201,67087187,67087177,67087171,67087127,67087123,67087103,67087087,67087039,67087019,67086983,67086979,67086961,67086949,67086937,67086931,67086917,67086893,67086871,67086869,67086839,67086827,67086823,67086793,67086757,67086727,67086673,67086671,67086667,67086647,67086637,67086629,67086623,67086611,67086589,67086559,67086521,67086457,67086433,67086421,67086391,67086361,67086347,67086337,67086323,67086317,67086311,67086307,67086293,67086281,67086259,67086211,67086191,67086137,67086109,67086083,67086067,67086053,67086049,67086043,67086013,67086007,67086001,67085959,67085939,67085933,67085923,67085911,67085899,67085869,67085867,67085861,67085849,67085839,67085831,67085819,67085813,67085803,67085801,67085783,67085771,67085761,67085741,67085731,67085701,67085677,67085657,67085647,67085639,67085617,67085609,67085569,67085533,67085531,67085527,67085521,67085453,67085443,67085437,67085429,67085401,67085377,67085357,67085353,67085351,67085341,67085303,67085287,67085267,67085261,67085233,67085191,67085189,67085173,67085171,67085159,67085119,67085101,67085099,67085093,67085059,67085047,67085003,67084993,67084981,67084973,67084931,67084891,67084879,67084861,67084817,67084807,67084799,67084793,67084789,67084783,67084781,67084777,67084757,67084753,67084751,67084723,67084709,67084681,67084679,67084657,67084643,67084639,67084637,67084609,67084603,67084553,67084547,67084517,67084513,67084483,67084477,67084471,67084447,67084439,67084427,67084417,67084387,67084349,67084333,67084331,67084313,67084309,67084289,67084267,67084247,67084189,67084187,67084177,67084141,67084139,67084111,67084097,67084081,67084049,67084033,67084013,67084001,67083977,67083959,67083943,67083937,67083901,67083883,67083871,67083859,67083829,67083811,67083803,67083799,67083787,67083781,67083773,67083769,67083761,67083739,67083727,67083707,67083703,67083697,67083689,67083631,67083629,67083619,67083613,67083589,67083539,67083521,67083517,67083481,67083461,67083451,67083437,67083371,67083323,67083239,67083221,67083217,67083209,67083199,67083197,67083193,67083113,67083097,67083067,67083043,67083041,67083017,67082989,67082987,67082963,67082933,67082909,67082891,67082861,67082857,67082843,67082831,67082809,67082801,67082783,67082779,67082753,67082707,67082699,67082689,67082671,67082657,67082599,67082579,67082557,67082551,67082549,67082531,67082503,67082497,67082453,67082417,67082399,67082383,67082363,67082341,67082339,67082321,67082311,67082251,67082231,67082227,67082189,67082159,67082143,67082131,67082129,67082123,67082101,67082083,67082023,67082003,67081957,67081919,67081897,67081871,67081841,67081829,67081811,67081787,67081783,67081771,67081769,67081759,67081741,67081733,67081717,67081709,67081697,67081691,67081687,67081681,67081661,67081633,67081631,67081621,67081603,67081601,67081583,67081579,67081577,67081537,67081529,67081499,67081477,67081459,67081429,67081423,67081393,67081351,67081319,67081309,67081283,67081249,67081243,67081237,67081219,67081213,67081211,67081159,67081139,67081127,67081123,67081103,67081097,67081073,67081057,67081051,67080977,67080971,67080967,67080947,67080917,67080859,67080833,67080823,67080821,67080803,67080781,67080763,67080757,67080751,67080737,67080709,67080701,67080679,67080653,67080647,67080631,67080557,67080553,67080527,67080491,67080479,67080439,67080437,67080413,67080367,67080361,67080353,67080337,67080329,67080323,67080319,67080287,67080281,67080271,67080217,67080191,67080179,67080173,67080157,67080131,67080107,67080073,67080061,67080047,67080037,67080031,67080023,67079993,67079989,67079981,67079963,67079941,67079933,67079917,67079911,67079869,67079863,67079849,67079839,67079801,67079791,67079777,67079767,67079759,67079737,67079711,67079693,67079657,67079647,67079641,67079599,67079591,67079587,67079497,67079491,67079489,67079473,67079461,67079459,67079449,67079437,67079429,67079423,67079393,67079359,67079351,67079347,67079333,67079323,67079317,67079303,67079281,67079267,67079249,67079237,67079219,67079213,67079209,67079203,67079197,67079179,67079153,67079149,67079141,67079123,67079107,67079087,67079083,67079081,67079053,67079041,67079027,67079021,67078981,67078961,67078931,67078919,67078903,67078877,67078871,67078819,67078813,67078807,67078801,67078793,67078789,67078777,67078763,67078703,67078673,67078643,67078577,67078573,67078553,67078519,67078483,67078469,67078463,67078433,67078423,67078391,67078387,67078369,67078367,67078343,67078331,67078309,67078301,67078289,67078283,67078217,67078213,67078199,67078181,67078171,67078169,67078159,67078153,67078147,67078139,67078133,67078127,67078117,67078069,67078061,67078013,67078007,67078001,67077991,67077947,67077931,67077917,67077877,67077859,67077851,67077827,67077811,67077799,67077797,67077793,67077761,67077757,67077737,67077719,67077697,67077643,67077623,67077611,67077607,67077553,67077541,67077539,67077523,67077511,67077503,67077497,67077473,67077469,67077449,67077419,67077403,67077379,67077349,67077341,67077313,67077301,67077299,67077293,67077287,67077259,67077217,67077181,67077173,67077169,67077167,67077161,67077133,67077103,67077079,67077071,67077047,67077007,67077001,67076953,67076929,67076927,67076903,67076899,67076887,67076879,67076869,67076857,67076851,67076843,67076833,67076803,67076773,67076741,67076729,67076693,67076683,67076677,67076663,67076651,67076629,67076627,67076599,67076573,67076549,67076539,67076519,67076497,67076489,67076413,67076411,67076389,67076371,67076357,67076353,67076351,67076341,67076291,67076279,67076263,67076231,67076189,67076147,67076117,67076077,67076071,67076069,67076057,67076039,67076029,67075993,67075991,67075973,67075963,67075949,67075937,67075933,67075913,67075907,67075873,67075867,67075849,67075837,67075823,67075787,67075781,67075769,67075747,67075741,67075699,67075691,67075669,67075663,67075649,67075639,67075633,67075621,67075609,67075607,67075601,67075583,67075577,67075573,67075531 };

} // namespace internal
} // namespace CGAL
