#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->insert(307)) << std::endl;
std::cout << (a->insert(53)) << std::endl;
std::cout << (a->insert(59)) << std::endl;
std::cout << (a->insert(23)) << std::endl;
std::cout << (a->insert(23)) << std::endl;
std::cout << (a->insert(307)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << (a->remove(53)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*c);
b->printPretty();
std::cout << (b->insert(81)) << std::endl;
std::cout << (b->remove(81)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
std::cout << (b->insert(25)) << std::endl;
std::cout << (a->insert(132)) << std::endl;
*b=*e;
std::cout << (b->insert(164)) << std::endl;
d->printPretty();
*e=*c;
std::cout << (e->insert(473)) << std::endl;
std::cout << (a->remove(330)) << std::endl;
b->printPretty();
std::cout << (e->remove(473)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (a->insert(23)) << std::endl;
*b=*b;
*e=*b;
std::cout << (e->insert(164)) << std::endl;
std::cout << (e->insert(483)) << std::endl;
*b=*d;
std::cout << (d->remove(228)) << std::endl;
std::cout << (b->remove(123)) << std::endl;
std::cout << (e->insert(344)) << std::endl;
*d=*a;
std::cout << (b->insert(127)) << std::endl;
std::cout << (d->remove(93)) << std::endl;
*c=*e;
d->printPretty();
std::cout << (d->remove(307)) << std::endl;
b->printPretty();
*c=*c;
std::cout << (a->insert(118)) << std::endl;
*e=*b;
std::cout << (a->insert(329)) << std::endl;
std::cout << (b->remove(79)) << std::endl;
std::cout << (d->remove(315)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (a->insert(23)) << std::endl;
a->printPretty();
c->printPretty();
*b=*c;
*d=*d;
*b=*d;
std::cout << (c->remove(145)) << std::endl;
*e=*e;
std::cout << (a->insert(184)) << std::endl;
*b=*e;
*c=*a;
*d=*b;
std::cout << (b->remove(127)) << std::endl;
std::cout << (b->remove(299)) << std::endl;
*b=*e;
std::cout << (c->remove(74)) << std::endl;
std::cout << (e->insert(127)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (c->insert(285)) << std::endl;
b->printPretty();
std::cout << (d->insert(127)) << std::endl;
std::cout << (a->remove(110)) << std::endl;
std::cout << (b->insert(127)) << std::endl;
a->printPretty();
*a=*e;
std::cout << (b->remove(127)) << std::endl;
std::cout << (a->insert(127)) << std::endl;
std::cout << (e->remove(54)) << std::endl;
std::cout << (c->insert(300)) << std::endl;
std::cout << (c->remove(118)) << std::endl;
std::cout << (c->insert(196)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->remove(24)) << std::endl;
b->printPretty();
std::cout << (e->remove(127)) << std::endl;
*b=*e;
*c=*a;
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->insert(430)) << std::endl;
std::cout << (b->remove(430)) << std::endl;
b->printPretty();
std::cout << (c->insert(127)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
c->printPretty();
*a=*c;
std::cout << (a->insert(97)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (c->remove(168)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (c->remove(489)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (a->insert(48)) << std::endl;
std::cout << (a->remove(127)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (a->insert(450)) << std::endl;
std::cout << (a->remove(450)) << std::endl;
a->printPretty();
std::cout << (d->remove(315)) << std::endl;
std::cout << (c->remove(127)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
std::cout << (c->insert(59)) << std::endl;
std::cout << (b->insert(378)) << std::endl;
d->printPretty();
std::cout << (a->insert(48)) << std::endl;
std::cout << (c->remove(484)) << std::endl;
std::cout << (b->remove(370)) << std::endl;
std::cout << (b->remove(378)) << std::endl;
std::cout << (d->insert(270)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
std::cout << (c->insert(257)) << std::endl;
std::cout << (c->remove(59)) << std::endl;
std::cout << (a->remove(160)) << std::endl;
std::cout << (c->remove(257)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
*d=*a;
*e=*d;
*d=*b;
std::cout << (e->remove(48)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
std::cout << (d->remove(335)) << std::endl;
*b=*b;
std::cout << (b->insert(44)) << std::endl;
std::cout << (d->insert(440)) << std::endl;
std::cout << (d->insert(269)) << std::endl;
c->printPretty();
*e=*d;
*d=*c;
std::cout << (c->insert(76)) << std::endl;
std::cout << (c->insert(76)) << std::endl;
std::cout << (c->insert(324)) << std::endl;
c->printPretty();
std::cout << (e->remove(112)) << std::endl;
*c=*d;
std::cout << (e->remove(269)) << std::endl;
std::cout << (d->remove(222)) << std::endl;
*b=*a;
*d=*d;
std::cout << (c->insert(345)) << std::endl;
std::cout << (a->remove(97)) << std::endl;
std::cout << (a->insert(48)) << std::endl;
std::cout << (a->remove(48)) << std::endl;
std::cout << (e->insert(440)) << std::endl;
std::cout << (e->insert(440)) << std::endl;
std::cout << (a->remove(283)) << std::endl;
std::cout << (d->remove(259)) << std::endl;
std::cout << (d->remove(212)) << std::endl;
*b=*d;
std::cout << (b->insert(281)) << std::endl;
std::cout << (c->insert(404)) << std::endl;
c->printPretty();
std::cout << (a->remove(385)) << std::endl;
a->printPretty();
*d=*e;
std::cout << (b->insert(77)) << std::endl;
std::cout << (e->insert(476)) << std::endl;
d->printPretty();
std::cout << (a->insert(460)) << std::endl;
std::cout << (e->insert(476)) << std::endl;
std::cout << (a->insert(399)) << std::endl;
std::cout << (c->remove(406)) << std::endl;
std::cout << (e->remove(476)) << std::endl;
std::cout << (d->insert(468)) << std::endl;
b->printPretty();
std::cout << (b->insert(281)) << std::endl;
std::cout << (c->remove(345)) << std::endl;
std::cout << (b->remove(454)) << std::endl;
std::cout << (d->insert(52)) << std::endl;
c->printPretty();
e->printPretty();
e->printPretty();
*c=*e;
e->printPretty();
std::cout << (c->remove(161)) << std::endl;
std::cout << (b->remove(281)) << std::endl;
std::cout << (a->insert(399)) << std::endl;
std::cout << (c->remove(440)) << std::endl;
std::cout << (b->insert(457)) << std::endl;
std::cout << (d->insert(468)) << std::endl;
*d=*e;
std::cout << (b->remove(315)) << std::endl;
std::cout << (b->remove(457)) << std::endl;
c->printPretty();
std::cout << (e->insert(455)) << std::endl;
c->printPretty();
std::cout << (c->insert(33)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (e->insert(289)) << std::endl;
std::cout << (b->remove(416)) << std::endl;
*d=*e;
std::cout << (d->insert(455)) << std::endl;
std::cout << (c->remove(179)) << std::endl;
std::cout << (b->insert(77)) << std::endl;
std::cout << (a->remove(399)) << std::endl;
std::cout << (d->insert(276)) << std::endl;
*b=*c;
std::cout << (e->insert(440)) << std::endl;
std::cout << (a->insert(460)) << std::endl;
*b=*a;
e->printPretty();
e->printPretty();
std::cout << (b->insert(62)) << std::endl;
std::cout << (e->insert(209)) << std::endl;
std::cout << (e->remove(209)) << std::endl;
std::cout << (a->remove(49)) << std::endl;
std::cout << (e->remove(204)) << std::endl;
std::cout << (e->insert(289)) << std::endl;
std::cout << (c->insert(33)) << std::endl;
c->printPretty();
std::cout << (b->remove(62)) << std::endl;
a->printPretty();
*d=*b;
std::cout << (e->remove(113)) << std::endl;
e->printPretty();
std::cout << (c->remove(200)) << std::endl;
std::cout << (a->remove(460)) << std::endl;
a->printPretty();
std::cout << (c->remove(151)) << std::endl;
std::cout << (b->remove(460)) << std::endl;
std::cout << (d->insert(460)) << std::endl;
std::cout << (c->remove(33)) << std::endl;
std::cout << (d->remove(412)) << std::endl;
e->printPretty();
std::cout << (c->insert(443)) << std::endl;
std::cout << (a->remove(138)) << std::endl;
std::cout << (b->insert(60)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (c->remove(443)) << std::endl;
std::cout << (e->insert(455)) << std::endl;
std::cout << (c->insert(190)) << std::endl;
std::cout << (e->remove(480)) << std::endl;
std::cout << (c->insert(190)) << std::endl;
std::cout << (d->insert(4)) << std::endl;
std::cout << (d->remove(460)) << std::endl;
e->printPretty();
std::cout << (a->insert(260)) << std::endl;
std::cout << (c->insert(190)) << std::endl;
d->printPretty();
std::cout << (a->insert(67)) << std::endl;
std::cout << (e->remove(25)) << std::endl;
std::cout << (b->remove(60)) << std::endl;
std::cout << (e->insert(113)) << std::endl;
std::cout << (c->insert(342)) << std::endl;
*b=*c;
std::cout << (a->remove(260)) << std::endl;
std::cout << (e->insert(386)) << std::endl;
std::cout << (c->insert(190)) << std::endl;
std::cout << (d->remove(4)) << std::endl;
std::cout << (a->remove(65)) << std::endl;
d->printPretty();
std::cout << (e->insert(289)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (d->insert(171)) << std::endl;
std::cout << (c->insert(248)) << std::endl;
a->printPretty();
std::cout << (d->remove(171)) << std::endl;
std::cout << (c->remove(1)) << std::endl;
std::cout << (c->remove(342)) << std::endl;
std::cout << (e->remove(113)) << std::endl;
std::cout << (a->remove(311)) << std::endl;
std::cout << (d->remove(63)) << std::endl;
std::cout << (c->insert(248)) << std::endl;
*a=*b;
std::cout << (c->insert(214)) << std::endl;
std::cout << (a->insert(190)) << std::endl;
std::cout << (e->remove(440)) << std::endl;
std::cout << (c->remove(190)) << std::endl;
*e=*d;
std::cout << (c->insert(288)) << std::endl;
std::cout << (e->remove(315)) << std::endl;
std::cout << (d->insert(29)) << std::endl;
*e=*a;
std::cout << (b->insert(460)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->insert(51)) << std::endl;
*c=*b;
*a=*a;
e->printPretty();
b->printPretty();
*b=*e;
*c=*e;
std::cout << (d->insert(29)) << std::endl;
std::cout << (a->insert(342)) << std::endl;
std::cout << (c->remove(342)) << std::endl;
std::cout << (d->insert(29)) << std::endl;
*d=*d;
std::cout << (a->remove(45)) << std::endl;
std::cout << (b->insert(190)) << std::endl;
b->printPretty();
std::cout << (b->remove(313)) << std::endl;
std::cout << (e->remove(496)) << std::endl;
std::cout << (b->insert(250)) << std::endl;
std::cout << (a->insert(401)) << std::endl;
std::cout << (b->insert(190)) << std::endl;
*c=*e;
*d=*e;
*e=*c;
std::cout << (c->remove(14)) << std::endl;
std::cout << (e->insert(190)) << std::endl;
*d=*d;
b->printPretty();
d->printPretty();
std::cout << (b->insert(250)) << std::endl;
std::cout << (d->remove(190)) << std::endl;
std::cout << (c->insert(342)) << std::endl;
*c=*c;
std::cout << (a->insert(459)) << std::endl;
e->printPretty();
std::cout << (d->remove(171)) << std::endl;
std::cout << (e->insert(190)) << std::endl;
*a=*c;
std::cout << (a->insert(5)) << std::endl;
std::cout << (a->remove(342)) << std::endl;
std::cout << (e->remove(342)) << std::endl;
std::cout << (d->remove(342)) << std::endl;
*c=*c;
std::cout << (e->remove(255)) << std::endl;
std::cout << (b->remove(342)) << std::endl;
c->printPretty();
*e=*a;
std::cout << (e->insert(190)) << std::endl;
std::cout << (e->remove(190)) << std::endl;
*d=*a;
*d=*b;
std::cout << (e->remove(49)) << std::endl;
*b=*b;
std::cout << (b->remove(405)) << std::endl;
std::cout << (b->remove(289)) << std::endl;
*b=*e;
a->printPretty();
std::cout << (c->remove(190)) << std::endl;
std::cout << (c->insert(411)) << std::endl;
std::cout << (c->insert(363)) << std::endl;
d->printPretty();
std::cout << (c->remove(153)) << std::endl;
std::cout << (c->insert(200)) << std::endl;
*b=*b;
std::cout << (b->remove(5)) << std::endl;
std::cout << (c->remove(404)) << std::endl;
std::cout << (e->remove(114)) << std::endl;
std::cout << (d->remove(313)) << std::endl;
*e=*c;
std::cout << (d->remove(190)) << std::endl;
std::cout << (c->insert(200)) << std::endl;
std::cout << (b->remove(363)) << std::endl;
std::cout << (e->insert(331)) << std::endl;
*d=*a;
b->printPretty();
std::cout << (a->remove(5)) << std::endl;
std::cout << (a->remove(190)) << std::endl;
std::cout << (b->insert(119)) << std::endl;
std::cout << (c->insert(411)) << std::endl;
std::cout << (a->insert(430)) << std::endl;
std::cout << (e->remove(363)) << std::endl;
std::cout << (e->remove(429)) << std::endl;
e->printPretty();
std::cout << (a->remove(400)) << std::endl;
std::cout << (c->remove(411)) << std::endl;
std::cout << (d->remove(339)) << std::endl;
std::cout << (b->insert(300)) << std::endl;
std::cout << (d->insert(231)) << std::endl;
std::cout << (a->insert(298)) << std::endl;
std::cout << (b->insert(186)) << std::endl;
std::cout << (e->insert(227)) << std::endl;
*d=*e;
std::cout << (d->insert(50)) << std::endl;
std::cout << (e->insert(409)) << std::endl;
std::cout << (d->remove(411)) << std::endl;
std::cout << (d->insert(50)) << std::endl;
std::cout << (d->remove(176)) << std::endl;
std::cout << (b->insert(119)) << std::endl;
std::cout << (a->insert(278)) << std::endl;
c->printPretty();
std::cout << (e->insert(358)) << std::endl;
c->printPretty();
*b=*c;
std::cout << (a->remove(298)) << std::endl;
std::cout << (b->remove(200)) << std::endl;
std::cout << (b->remove(356)) << std::endl;
std::cout << (e->insert(342)) << std::endl;
std::cout << (d->remove(50)) << std::endl;
e->printPretty();
std::cout << (c->insert(305)) << std::endl;
*a=*d;
std::cout << (a->insert(132)) << std::endl;
std::cout << (a->insert(432)) << std::endl;
std::cout << (d->insert(227)) << std::endl;
std::cout << (a->insert(203)) << std::endl;
std::cout << (e->insert(331)) << std::endl;
std::cout << (a->remove(25)) << std::endl;
b->printPretty();
*e=*a;
std::cout << (e->insert(147)) << std::endl;
std::cout << (e->insert(395)) << std::endl;
std::cout << (a->remove(132)) << std::endl;
std::cout << (e->remove(181)) << std::endl;
std::cout << (a->insert(302)) << std::endl;
b->printPretty();
std::cout << (b->insert(363)) << std::endl;
std::cout << (c->insert(334)) << std::endl;
std::cout << (e->remove(132)) << std::endl;
*c=*b;
std::cout << (d->remove(36)) << std::endl;
std::cout << (a->remove(302)) << std::endl;
c->printPretty();
std::cout << (c->insert(184)) << std::endl;
std::cout << (a->remove(200)) << std::endl;
*b=*c;
std::cout << (a->insert(331)) << std::endl;
std::cout << (a->remove(227)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (c->insert(144)) << std::endl;
std::cout << (a->insert(260)) << std::endl;
std::cout << (c->insert(99)) << std::endl;
std::cout << (b->insert(184)) << std::endl;
std::cout << (e->remove(133)) << std::endl;
*d=*a;
std::cout << (e->remove(43)) << std::endl;
std::cout << (e->insert(432)) << std::endl;
std::cout << (c->remove(184)) << std::endl;
*e=*a;
*c=*e;
std::cout << (b->remove(342)) << std::endl;
std::cout << (e->remove(400)) << std::endl;
std::cout << (b->insert(330)) << std::endl;
std::cout << (d->remove(473)) << std::endl;
b->printPretty();
*c=*c;
std::cout << (d->remove(203)) << std::endl;
std::cout << (a->remove(260)) << std::endl;
std::cout << (e->insert(203)) << std::endl;
std::cout << (b->insert(418)) << std::endl;
std::cout << (a->remove(61)) << std::endl;
a->printPretty();
std::cout << (a->remove(129)) << std::endl;
*b=*e;
b->printPretty();
std::cout << (d->insert(254)) << std::endl;
std::cout << (d->remove(67)) << std::endl;
*a=*c;
std::cout << (a->remove(331)) << std::endl;
std::cout << (b->remove(342)) << std::endl;
std::cout << (a->insert(203)) << std::endl;
e->printPretty();
e->printPretty();
*d=*a;
std::cout << (e->remove(203)) << std::endl;
*b=*b;
std::cout << (c->insert(432)) << std::endl;
std::cout << (e->remove(432)) << std::endl;
*a=*d;
d->printPretty();
std::cout << (d->insert(407)) << std::endl;
std::cout << (d->remove(203)) << std::endl;
*e=*d;
std::cout << (b->insert(60)) << std::endl;
std::cout << (b->insert(56)) << std::endl;
std::cout << (b->insert(260)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
*a=*a;
std::cout << (b->remove(49)) << std::endl;
*a=*e;
d->printPretty();
b->printPretty();
std::cout << (e->remove(132)) << std::endl;
std::cout << (c->remove(432)) << std::endl;
std::cout << (e->remove(260)) << std::endl;
e->printPretty();
std::cout << (a->remove(485)) << std::endl;
*e=*c;
b->printPretty();
*b=*b;
std::cout << (e->remove(342)) << std::endl;
*c=*c;
std::cout << (c->insert(332)) << std::endl;
std::cout << (e->insert(142)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (d->insert(67)) << std::endl;
std::cout << (c->insert(260)) << std::endl;
std::cout << (d->remove(305)) << std::endl;
std::cout << (e->remove(142)) << std::endl;
*e=*c;
std::cout << (d->remove(179)) << std::endl;
b->printPretty();
std::cout << (b->insert(432)) << std::endl;
std::cout << (c->insert(358)) << std::endl;
std::cout << (b->insert(60)) << std::endl;
std::cout << (b->remove(471)) << std::endl;
std::cout << (c->insert(206)) << std::endl;
c->printPretty();
std::cout << (c->insert(358)) << std::endl;
std::cout << (b->remove(266)) << std::endl;
e->printPretty();
std::cout << (a->remove(421)) << std::endl;
*a=*b;
std::cout << (c->insert(21)) << std::endl;
c->printPretty();
std::cout << (d->insert(342)) << std::endl;
std::cout << (a->remove(56)) << std::endl;
std::cout << (e->insert(203)) << std::endl;
std::cout << (a->remove(475)) << std::endl;
*b=*a;
std::cout << (d->insert(365)) << std::endl;
c->printPretty();
std::cout << (a->remove(83)) << std::endl;
std::cout << (d->insert(432)) << std::endl;
std::cout << (c->remove(332)) << std::endl;
std::cout << (e->remove(67)) << std::endl;
std::cout << (a->insert(53)) << std::endl;
*d=*a;
std::cout << (d->remove(306)) << std::endl;
std::cout << (d->insert(432)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (b->insert(164)) << std::endl;
a->printPretty();
std::cout << (d->insert(370)) << std::endl;
e->printPretty();
std::cout << (a->remove(267)) << std::endl;
std::cout << (b->remove(44)) << std::endl;
e->printPretty();
std::cout << (e->insert(332)) << std::endl;
a->printPretty();
std::cout << (e->remove(260)) << std::endl;
std::cout << (e->remove(342)) << std::endl;
std::cout << (c->remove(426)) << std::endl;
std::cout << (c->insert(80)) << std::endl;
std::cout << (d->insert(53)) << std::endl;
*c=*d;
std::cout << (d->insert(331)) << std::endl;
c->printPretty();
*c=*d;
std::cout << (b->insert(447)) << std::endl;
std::cout << (d->insert(468)) << std::endl;
std::cout << (a->remove(223)) << std::endl;
std::cout << (c->insert(432)) << std::endl;
b->printPretty();
std::cout << (c->remove(331)) << std::endl;
c->printPretty();
std::cout << (a->insert(418)) << std::endl;
std::cout << (e->remove(300)) << std::endl;
std::cout << (c->remove(432)) << std::endl;
std::cout << (c->remove(408)) << std::endl;
*e=*e;
std::cout << (e->insert(256)) << std::endl;
std::cout << (e->insert(256)) << std::endl;
std::cout << (a->remove(157)) << std::endl;
std::cout << (e->insert(348)) << std::endl;
std::cout << (b->remove(308)) << std::endl;
std::cout << (a->insert(60)) << std::endl;
std::cout << (b->insert(207)) << std::endl;
a->printPretty();
*d=*d;
std::cout << (e->insert(203)) << std::endl;
std::cout << (a->remove(89)) << std::endl;
std::cout << (b->remove(364)) << std::endl;
*e=*b;
*c=*e;
std::cout << (e->remove(447)) << std::endl;
std::cout << (e->insert(249)) << std::endl;
c->printPretty();
*d=*d;
b->printPretty();
*e=*b;
std::cout << (e->remove(160)) << std::endl;
std::cout << (d->remove(468)) << std::endl;
c->printPretty();
std::cout << (b->remove(92)) << std::endl;
std::cout << (c->remove(452)) << std::endl;
std::cout << (b->remove(67)) << std::endl;
std::cout << (d->remove(53)) << std::endl;
std::cout << (b->remove(347)) << std::endl;
std::cout << (e->remove(377)) << std::endl;
std::cout << (e->remove(428)) << std::endl;
*a=*b;
std::cout << (b->remove(336)) << std::endl;
std::cout << (b->insert(95)) << std::endl;
*d=*c;
std::cout << (a->insert(331)) << std::endl;
std::cout << (e->insert(493)) << std::endl;
c->printPretty();
std::cout << (e->insert(164)) << std::endl;
std::cout << (b->insert(480)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
std::cout << (c->remove(164)) << std::endl;
std::cout << (c->remove(207)) << std::endl;
std::cout << (a->remove(260)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (b->remove(303)) << std::endl;
*a=*c;
std::cout << (b->insert(331)) << std::endl;
std::cout << (a->insert(447)) << std::endl;
std::cout << (a->remove(356)) << std::endl;
std::cout << (e->remove(79)) << std::endl;
std::cout << (a->remove(133)) << std::endl;
std::cout << (b->insert(480)) << std::endl;
std::cout << (b->insert(188)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
b->printPretty();
e->printPretty();
d->printPretty();
std::cout << (b->remove(188)) << std::endl;
std::cout << (e->remove(59)) << std::endl;
std::cout << (c->insert(432)) << std::endl;
std::cout << (d->insert(331)) << std::endl;
std::cout << (d->remove(457)) << std::endl;
std::cout << (b->insert(480)) << std::endl;
*b=*d;
std::cout << (c->remove(160)) << std::endl;
std::cout << (e->remove(361)) << std::endl;
*b=*d;
std::cout << (e->remove(277)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->remove(365)) << std::endl;
std::cout << (e->remove(402)) << std::endl;
b->printPretty();
std::cout << (d->remove(292)) << std::endl;
std::cout << (a->remove(260)) << std::endl;
a->printPretty();
std::cout << (d->insert(207)) << std::endl;
std::cout << (c->insert(432)) << std::endl;
*c=*c;
std::cout << (e->insert(260)) << std::endl;
c->printPretty();
std::cout << (a->insert(12)) << std::endl;
std::cout << (c->remove(447)) << std::endl;
*a=*d;
c->printPretty();
std::cout << (a->insert(67)) << std::endl;
a->printPretty();
std::cout << (c->insert(60)) << std::endl;
c->printPretty();
*b=*a;
std::cout << (d->remove(164)) << std::endl;
d->printPretty();
std::cout << (e->insert(74)) << std::endl;
std::cout << (a->insert(447)) << std::endl;
std::cout << (e->remove(37)) << std::endl;
std::cout << (b->insert(207)) << std::endl;
std::cout << (a->remove(419)) << std::endl;
b->printPretty();
c->printPretty();
c->printPretty();
std::cout << (b->insert(451)) << std::endl;
*c=*c;
a->printPretty();
std::cout << (d->remove(207)) << std::endl;
*b=*d;
std::cout << (c->insert(67)) << std::endl;
std::cout << (a->remove(269)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
*a=*a;
*e=*d;
std::cout << (e->remove(60)) << std::endl;
*d=*a;
*e=*c;
std::cout << (e->insert(5)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (c->remove(14)) << std::endl;
*c=*b;
*a=*b;
std::cout << (e->insert(203)) << std::endl;
std::cout << (b->remove(67)) << std::endl;
std::cout << (c->remove(447)) << std::endl;
b->printPretty();
std::cout << (d->remove(67)) << std::endl;
std::cout << (e->insert(260)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
*c=*b;
std::cout << (c->insert(432)) << std::endl;
std::cout << (d->insert(191)) << std::endl;
b->printPretty();
std::cout << (a->insert(401)) << std::endl;
std::cout << (e->remove(5)) << std::endl;
std::cout << (a->remove(432)) << std::endl;
*d=*d;
std::cout << (c->insert(60)) << std::endl;
std::cout << (a->remove(183)) << std::endl;
std::cout << (e->insert(10)) << std::endl;
std::cout << (b->insert(203)) << std::endl;
std::cout << (b->remove(169)) << std::endl;
std::cout << (c->insert(203)) << std::endl;
std::cout << (c->remove(272)) << std::endl;
std::cout << (e->insert(317)) << std::endl;
std::cout << (b->remove(48)) << std::endl;
std::cout << (e->remove(203)) << std::endl;
std::cout << (e->remove(317)) << std::endl;
e->printPretty();
std::cout << (b->insert(203)) << std::endl;
*b=*e;
std::cout << (e->insert(260)) << std::endl;
std::cout << (c->remove(168)) << std::endl;
std::cout << (d->insert(191)) << std::endl;
std::cout << (b->insert(60)) << std::endl;
c->printPretty();
std::cout << (d->insert(260)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
d->printPretty();
std::cout << (a->insert(386)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (c->insert(171)) << std::endl;
std::cout << (a->remove(191)) << std::endl;
std::cout << (d->remove(289)) << std::endl;
std::cout << (e->remove(291)) << std::endl;
std::cout << (b->remove(260)) << std::endl;
std::cout << (d->remove(191)) << std::endl;
*b=*d;
e->printPretty();
std::cout << (b->remove(207)) << std::endl;
b->printPretty();
c->printPretty();
std::cout << (e->remove(260)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
std::cout << (e->remove(10)) << std::endl;
std::cout << (c->insert(438)) << std::endl;
*a=*e;
std::cout << (e->remove(467)) << std::endl;
std::cout << (c->remove(171)) << std::endl;
*d=*e;
return 0;
}
