#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << (a->remove(498)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *e=new ScapegoatTree<int>(*a);
*d=*c;
e->printPretty();
c->printPretty();
*c=*a;
std::cout << (c->remove(195)) << std::endl;
e->printPretty();
*e=*a;
std::cout << (b->remove(307)) << std::endl;
*c=*c;
std::cout << (a->remove(368)) << std::endl;
*e=*b;
d->printPretty();
*c=*b;
c->printPretty();
std::cout << (e->insert(39)) << std::endl;
std::cout << (d->insert(48)) << std::endl;
*d=*d;
c->printPretty();
std::cout << (d->insert(48)) << std::endl;
d->printPretty();
a->printPretty();
*c=*c;
a->printPretty();
std::cout << (e->remove(39)) << std::endl;
c->printPretty();
std::cout << (c->remove(1)) << std::endl;
std::cout << (e->insert(164)) << std::endl;
std::cout << (e->remove(164)) << std::endl;
std::cout << (c->insert(289)) << std::endl;
std::cout << (c->remove(220)) << std::endl;
*e=*e;
std::cout << (d->remove(33)) << std::endl;
d->printPretty();
*c=*b;
*c=*c;
std::cout << (d->remove(48)) << std::endl;
*c=*b;
std::cout << (c->insert(373)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (b->remove(269)) << std::endl;
std::cout << (a->remove(485)) << std::endl;
b->printPretty();
std::cout << (b->remove(157)) << std::endl;
a->printPretty();
std::cout << (d->insert(265)) << std::endl;
std::cout << (e->remove(151)) << std::endl;
std::cout << (e->remove(488)) << std::endl;
std::cout << (c->remove(498)) << std::endl;
*e=*b;
std::cout << (c->remove(373)) << std::endl;
std::cout << (a->remove(242)) << std::endl;
std::cout << (d->insert(265)) << std::endl;
std::cout << (a->insert(194)) << std::endl;
std::cout << (a->remove(194)) << std::endl;
std::cout << (d->insert(492)) << std::endl;
std::cout << (d->insert(265)) << std::endl;
d->printPretty();
*d=*e;
std::cout << (a->remove(289)) << std::endl;
std::cout << (b->insert(420)) << std::endl;
std::cout << (c->remove(367)) << std::endl;
std::cout << (b->insert(336)) << std::endl;
std::cout << (a->remove(141)) << std::endl;
*a=*d;
*c=*c;
d->printPretty();
std::cout << (a->remove(413)) << std::endl;
std::cout << (b->remove(420)) << std::endl;
*a=*a;
std::cout << (e->remove(443)) << std::endl;
std::cout << (b->remove(158)) << std::endl;
*a=*a;
*e=*d;
*a=*b;
d->printPretty();
std::cout << (e->remove(186)) << std::endl;
a->printPretty();
std::cout << (e->insert(156)) << std::endl;
std::cout << (e->remove(447)) << std::endl;
std::cout << (e->insert(413)) << std::endl;
std::cout << (a->insert(338)) << std::endl;
std::cout << (b->remove(336)) << std::endl;
std::cout << (e->insert(383)) << std::endl;
std::cout << (a->insert(338)) << std::endl;
std::cout << (b->remove(216)) << std::endl;
*b=*c;
*b=*b;
std::cout << (c->remove(82)) << std::endl;
*c=*e;
*c=*b;
std::cout << (a->remove(453)) << std::endl;
std::cout << (e->remove(156)) << std::endl;
std::cout << (b->remove(284)) << std::endl;
std::cout << (e->remove(93)) << std::endl;
*b=*e;
std::cout << (b->remove(383)) << std::endl;
std::cout << (e->insert(383)) << std::endl;
*d=*b;
std::cout << (d->insert(413)) << std::endl;
e->printPretty();
b->printPretty();
c->printPretty();
std::cout << (c->insert(347)) << std::endl;
std::cout << (d->insert(256)) << std::endl;
a->printPretty();
std::cout << (c->insert(266)) << std::endl;
c->printPretty();
std::cout << (e->insert(383)) << std::endl;
*c=*e;
*b=*b;
std::cout << (e->insert(383)) << std::endl;
*d=*c;
std::cout << (e->insert(413)) << std::endl;
std::cout << (c->remove(413)) << std::endl;
*e=*a;
*d=*b;
d->printPretty();
std::cout << (c->insert(379)) << std::endl;
*d=*e;
std::cout << (b->remove(413)) << std::endl;
std::cout << (c->insert(379)) << std::endl;
std::cout << (a->remove(212)) << std::endl;
std::cout << (b->insert(429)) << std::endl;
std::cout << (d->insert(319)) << std::endl;
std::cout << (c->remove(379)) << std::endl;
std::cout << (c->insert(385)) << std::endl;
c->printPretty();
std::cout << (e->remove(282)) << std::endl;
*d=*d;
std::cout << (d->insert(338)) << std::endl;
std::cout << (e->remove(338)) << std::endl;
a->printPretty();
*c=*b;
std::cout << (c->insert(429)) << std::endl;
b->printPretty();
std::cout << (b->remove(429)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
std::cout << (c->remove(429)) << std::endl;
d->printPretty();
std::cout << (d->insert(338)) << std::endl;
std::cout << (e->insert(351)) << std::endl;
std::cout << (e->insert(351)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
std::cout << (b->insert(32)) << std::endl;
d->printPretty();
*a=*b;
*a=*e;
e->printPretty();
b->printPretty();
std::cout << (b->remove(162)) << std::endl;
*d=*a;
std::cout << (b->insert(32)) << std::endl;
*a=*c;
*d=*e;
std::cout << (b->remove(32)) << std::endl;
std::cout << (d->remove(351)) << std::endl;
std::cout << (e->remove(294)) << std::endl;
std::cout << (d->insert(336)) << std::endl;
std::cout << (e->insert(351)) << std::endl;
std::cout << (e->remove(336)) << std::endl;
std::cout << (a->insert(285)) << std::endl;
std::cout << (b->remove(391)) << std::endl;
std::cout << (c->insert(376)) << std::endl;
std::cout << (d->remove(69)) << std::endl;
std::cout << (b->remove(62)) << std::endl;
*c=*d;
*c=*c;
std::cout << (b->remove(4)) << std::endl;
std::cout << (e->insert(453)) << std::endl;
a->printPretty();
std::cout << (c->remove(186)) << std::endl;
b->printPretty();
std::cout << (e->insert(453)) << std::endl;
*a=*e;
b->printPretty();
c->printPretty();
c->printPretty();
std::cout << (d->insert(336)) << std::endl;
std::cout << (d->insert(39)) << std::endl;
e->printPretty();
std::cout << (e->remove(453)) << std::endl;
*a=*d;
*c=*d;
*c=*e;
c->printPretty();
std::cout << (c->remove(104)) << std::endl;
std::cout << (d->remove(39)) << std::endl;
std::cout << (c->remove(351)) << std::endl;
std::cout << (d->insert(336)) << std::endl;
e->printPretty();
std::cout << (c->insert(233)) << std::endl;
std::cout << (a->insert(336)) << std::endl;
c->printPretty();
std::cout << (b->remove(157)) << std::endl;
std::cout << (d->remove(320)) << std::endl;
std::cout << (b->insert(485)) << std::endl;
std::cout << (d->insert(338)) << std::endl;
std::cout << (d->insert(414)) << std::endl;
*e=*c;
std::cout << (e->insert(362)) << std::endl;
std::cout << (d->remove(338)) << std::endl;
std::cout << (a->remove(39)) << std::endl;
*a=*c;
std::cout << (a->insert(233)) << std::endl;
d->printPretty();
std::cout << (a->insert(463)) << std::endl;
*b=*c;
std::cout << (a->remove(463)) << std::endl;
std::cout << (e->remove(392)) << std::endl;
std::cout << (a->remove(233)) << std::endl;
*e=*a;
d->printPretty();
c->printPretty();
std::cout << (d->insert(414)) << std::endl;
std::cout << (b->insert(233)) << std::endl;
std::cout << (c->remove(233)) << std::endl;
c->printPretty();
*e=*a;
std::cout << (d->remove(99)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
std::cout << (d->insert(57)) << std::endl;
*c=*b;
std::cout << (b->remove(64)) << std::endl;
std::cout << (b->insert(233)) << std::endl;
std::cout << (b->insert(447)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (e->insert(233)) << std::endl;
std::cout << (b->remove(447)) << std::endl;
*b=*c;
std::cout << (a->insert(420)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
std::cout << (d->insert(57)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
*c=*a;
std::cout << (c->insert(420)) << std::endl;
*a=*c;
*b=*c;
std::cout << (d->remove(336)) << std::endl;
std::cout << (e->insert(243)) << std::endl;
std::cout << (d->insert(23)) << std::endl;
std::cout << (a->remove(499)) << std::endl;
std::cout << (e->remove(243)) << std::endl;
std::cout << (b->remove(420)) << std::endl;
std::cout << (a->remove(420)) << std::endl;
std::cout << (a->remove(368)) << std::endl;
*a=*c;
std::cout << (e->insert(148)) << std::endl;
*b=*e;
std::cout << (a->insert(367)) << std::endl;
std::cout << (b->insert(441)) << std::endl;
std::cout << (b->remove(294)) << std::endl;
std::cout << (e->remove(481)) << std::endl;
*c=*c;
std::cout << (b->remove(148)) << std::endl;
std::cout << (c->remove(423)) << std::endl;
std::cout << (a->remove(420)) << std::endl;
std::cout << (b->insert(460)) << std::endl;
std::cout << (a->insert(446)) << std::endl;
std::cout << (d->insert(202)) << std::endl;
b->printPretty();
std::cout << (a->remove(359)) << std::endl;
std::cout << (c->remove(420)) << std::endl;
*e=*a;
std::cout << (d->insert(23)) << std::endl;
std::cout << (a->remove(367)) << std::endl;
std::cout << (e->remove(252)) << std::endl;
std::cout << (c->insert(368)) << std::endl;
std::cout << (c->remove(114)) << std::endl;
std::cout << (a->insert(446)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (d->remove(202)) << std::endl;
std::cout << (a->remove(472)) << std::endl;
std::cout << (e->insert(446)) << std::endl;
std::cout << (e->insert(446)) << std::endl;
std::cout << (a->remove(446)) << std::endl;
std::cout << (e->insert(367)) << std::endl;
std::cout << (e->insert(76)) << std::endl;
std::cout << (a->insert(246)) << std::endl;
*d=*d;
std::cout << (a->remove(246)) << std::endl;
std::cout << (d->remove(86)) << std::endl;
std::cout << (e->insert(380)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (d->remove(225)) << std::endl;
*e=*b;
std::cout << (d->insert(313)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
*d=*e;
std::cout << (c->insert(265)) << std::endl;
std::cout << (d->remove(349)) << std::endl;
std::cout << (c->remove(265)) << std::endl;
std::cout << (e->remove(233)) << std::endl;
*a=*a;
e->printPretty();
std::cout << (b->insert(184)) << std::endl;
std::cout << (e->insert(369)) << std::endl;
std::cout << (e->insert(441)) << std::endl;
c->printPretty();
std::cout << (e->remove(137)) << std::endl;
e->printPretty();
std::cout << (a->insert(67)) << std::endl;
b->printPretty();
std::cout << (b->insert(184)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (b->remove(441)) << std::endl;
std::cout << (b->remove(184)) << std::endl;
std::cout << (b->remove(169)) << std::endl;
std::cout << (d->insert(233)) << std::endl;
std::cout << (c->remove(368)) << std::endl;
std::cout << (d->remove(465)) << std::endl;
std::cout << (d->remove(444)) << std::endl;
b->printPretty();
std::cout << (c->remove(260)) << std::endl;
std::cout << (b->remove(14)) << std::endl;
std::cout << (b->remove(484)) << std::endl;
std::cout << (d->remove(444)) << std::endl;
std::cout << (e->remove(441)) << std::endl;
e->printPretty();
*a=*c;
*b=*a;
*b=*b;
std::cout << (e->insert(369)) << std::endl;
std::cout << (c->insert(430)) << std::endl;
std::cout << (c->remove(473)) << std::endl;
std::cout << (d->insert(351)) << std::endl;
*c=*c;
std::cout << (c->remove(430)) << std::endl;
*c=*d;
d->printPretty();
*d=*e;
std::cout << (c->remove(441)) << std::endl;
std::cout << (e->insert(369)) << std::endl;
std::cout << (e->remove(111)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (d->insert(465)) << std::endl;
*c=*c;
std::cout << (c->insert(218)) << std::endl;
b->printPretty();
*a=*d;
std::cout << (a->insert(380)) << std::endl;
std::cout << (c->remove(233)) << std::endl;
std::cout << (a->insert(369)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (a->insert(380)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (b->remove(261)) << std::endl;
std::cout << (e->remove(416)) << std::endl;
*c=*b;
d->printPretty();
c->printPretty();
c->printPretty();
std::cout << (c->insert(76)) << std::endl;
*e=*a;
std::cout << (c->remove(76)) << std::endl;
std::cout << (b->remove(208)) << std::endl;
std::cout << (a->insert(460)) << std::endl;
c->printPretty();
*d=*d;
std::cout << (e->remove(235)) << std::endl;
*a=*b;
c->printPretty();
std::cout << (d->insert(465)) << std::endl;
*c=*a;
*d=*e;
e->printPretty();
std::cout << (b->insert(161)) << std::endl;
std::cout << (e->remove(380)) << std::endl;
std::cout << (d->remove(360)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
b->printPretty();
std::cout << (b->insert(161)) << std::endl;
a->printPretty();
std::cout << (d->insert(465)) << std::endl;
std::cout << (c->insert(141)) << std::endl;
*b=*c;
b->printPretty();
std::cout << (e->insert(460)) << std::endl;
d->printPretty();
*d=*a;
std::cout << (e->insert(401)) << std::endl;
*a=*c;
e->printPretty();
std::cout << (b->insert(141)) << std::endl;
std::cout << (a->insert(30)) << std::endl;
std::cout << (c->remove(321)) << std::endl;
std::cout << (d->insert(351)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
e->printPretty();
std::cout << (a->remove(119)) << std::endl;
*d=*b;
std::cout << (b->remove(141)) << std::endl;
std::cout << (c->remove(78)) << std::endl;
std::cout << (d->remove(141)) << std::endl;
std::cout << (c->insert(376)) << std::endl;
std::cout << (d->insert(66)) << std::endl;
a->printPretty();
std::cout << (a->insert(78)) << std::endl;
d->printPretty();
std::cout << (d->remove(474)) << std::endl;
std::cout << (b->remove(78)) << std::endl;
*b=*b;
std::cout << (a->remove(141)) << std::endl;
std::cout << (b->remove(239)) << std::endl;
e->printPretty();
std::cout << (d->remove(66)) << std::endl;
std::cout << (c->remove(376)) << std::endl;
std::cout << (a->insert(132)) << std::endl;
std::cout << (d->insert(78)) << std::endl;
std::cout << (e->remove(91)) << std::endl;
d->printPretty();
std::cout << (d->remove(78)) << std::endl;
d->printPretty();
std::cout << (c->insert(141)) << std::endl;
e->printPretty();
*e=*d;
e->printPretty();
std::cout << (c->remove(167)) << std::endl;
std::cout << (c->insert(369)) << std::endl;
std::cout << (c->remove(141)) << std::endl;
std::cout << (c->remove(86)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
std::cout << (d->remove(150)) << std::endl;
a->printPretty();
std::cout << (d->remove(85)) << std::endl;
c->printPretty();
b->printPretty();
*a=*b;
std::cout << (a->insert(481)) << std::endl;
e->printPretty();
std::cout << (a->insert(278)) << std::endl;
b->printPretty();
std::cout << (e->insert(202)) << std::endl;
e->printPretty();
std::cout << (c->remove(369)) << std::endl;
std::cout << (e->insert(202)) << std::endl;
*e=*e;
std::cout << (a->remove(335)) << std::endl;
a->printPretty();
std::cout << (a->remove(366)) << std::endl;
std::cout << (a->insert(481)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
std::cout << (e->remove(22)) << std::endl;
*e=*a;
a->printPretty();
*a=*b;
std::cout << (c->remove(418)) << std::endl;
std::cout << (d->insert(460)) << std::endl;
std::cout << (d->remove(460)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
*d=*e;
std::cout << (b->remove(482)) << std::endl;
std::cout << (b->insert(254)) << std::endl;
std::cout << (e->remove(278)) << std::endl;
std::cout << (b->insert(254)) << std::endl;
std::cout << (e->insert(288)) << std::endl;
*c=*c;
*e=*b;
std::cout << (b->remove(254)) << std::endl;
std::cout << (d->insert(473)) << std::endl;
std::cout << (d->remove(481)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
*e=*e;
a->printPretty();
std::cout << (c->remove(202)) << std::endl;
std::cout << (d->remove(335)) << std::endl;
*c=*c;
std::cout << (b->remove(488)) << std::endl;
std::cout << (b->remove(412)) << std::endl;
std::cout << (d->insert(278)) << std::endl;
std::cout << (d->insert(468)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
std::cout << (e->remove(496)) << std::endl;
std::cout << (d->remove(498)) << std::endl;
*d=*c;
*a=*d;
*b=*a;
std::cout << (e->insert(254)) << std::endl;
*a=*e;
*a=*b;
*b=*c;
*c=*b;
b->printPretty();
std::cout << (b->remove(499)) << std::endl;
std::cout << (d->insert(369)) << std::endl;
a->printPretty();
c->printPretty();
b->printPretty();
std::cout << (b->remove(76)) << std::endl;
*d=*a;
d->printPretty();
std::cout << (e->insert(350)) << std::endl;
c->printPretty();
*d=*b;
*d=*c;
a->printPretty();
*c=*b;
*e=*b;
std::cout << (e->remove(34)) << std::endl;
std::cout << (b->insert(91)) << std::endl;
e->printPretty();
std::cout << (d->remove(69)) << std::endl;
*c=*a;
std::cout << (a->insert(373)) << std::endl;
std::cout << (a->remove(373)) << std::endl;
std::cout << (b->insert(191)) << std::endl;
std::cout << (a->insert(272)) << std::endl;
std::cout << (b->insert(116)) << std::endl;
std::cout << (b->remove(388)) << std::endl;
std::cout << (e->insert(315)) << std::endl;
b->printPretty();
std::cout << (a->remove(486)) << std::endl;
std::cout << (d->insert(309)) << std::endl;
std::cout << (a->insert(191)) << std::endl;
std::cout << (b->remove(191)) << std::endl;
*d=*e;
std::cout << (b->insert(170)) << std::endl;
std::cout << (e->remove(121)) << std::endl;
e->printPretty();
std::cout << (b->insert(91)) << std::endl;
*e=*a;
b->printPretty();
std::cout << (a->remove(272)) << std::endl;
*b=*c;
e->printPretty();
std::cout << (e->insert(191)) << std::endl;
std::cout << (d->insert(343)) << std::endl;
a->printPretty();
std::cout << (d->remove(196)) << std::endl;
c->printPretty();
*d=*b;
std::cout << (e->insert(317)) << std::endl;
std::cout << (e->remove(298)) << std::endl;
a->printPretty();
std::cout << (e->remove(61)) << std::endl;
std::cout << (a->remove(367)) << std::endl;
std::cout << (c->insert(2)) << std::endl;
std::cout << (a->remove(191)) << std::endl;
std::cout << (b->remove(229)) << std::endl;
std::cout << (e->insert(317)) << std::endl;
a->printPretty();
std::cout << (a->insert(85)) << std::endl;
std::cout << (c->insert(295)) << std::endl;
std::cout << (e->remove(385)) << std::endl;
std::cout << (c->insert(295)) << std::endl;
*a=*e;
a->printPretty();
std::cout << (b->remove(276)) << std::endl;
std::cout << (d->insert(465)) << std::endl;
std::cout << (c->insert(193)) << std::endl;
std::cout << (e->insert(272)) << std::endl;
std::cout << (a->remove(272)) << std::endl;
std::cout << (e->remove(191)) << std::endl;
std::cout << (e->remove(317)) << std::endl;
std::cout << (c->remove(242)) << std::endl;
std::cout << (e->remove(332)) << std::endl;
*a=*e;
std::cout << (c->insert(239)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (d->insert(251)) << std::endl;
*a=*c;
std::cout << (c->insert(165)) << std::endl;
std::cout << (d->insert(441)) << std::endl;
std::cout << (d->remove(465)) << std::endl;
*b=*c;
e->printPretty();
std::cout << (d->remove(307)) << std::endl;
std::cout << (e->insert(272)) << std::endl;
std::cout << (d->insert(240)) << std::endl;
std::cout << (c->remove(165)) << std::endl;
std::cout << (d->insert(119)) << std::endl;
b->printPretty();
std::cout << (d->remove(251)) << std::endl;
std::cout << (a->remove(258)) << std::endl;
std::cout << (e->insert(272)) << std::endl;
std::cout << (a->remove(388)) << std::endl;
a->printPretty();
std::cout << (d->remove(240)) << std::endl;
std::cout << (e->remove(268)) << std::endl;
std::cout << (d->remove(441)) << std::endl;
std::cout << (b->insert(142)) << std::endl;
*c=*c;
std::cout << (e->remove(241)) << std::endl;
std::cout << (b->insert(165)) << std::endl;
*a=*d;
std::cout << (c->remove(465)) << std::endl;
*d=*e;
c->printPretty();
std::cout << (d->insert(38)) << std::endl;
c->printPretty();
std::cout << (c->insert(152)) << std::endl;
std::cout << (c->insert(323)) << std::endl;
std::cout << (c->insert(284)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
d->printPretty();
std::cout << (a->remove(202)) << std::endl;
std::cout << (d->insert(250)) << std::endl;
std::cout << (b->remove(205)) << std::endl;
*d=*d;
std::cout << (b->insert(165)) << std::endl;
c->printPretty();
std::cout << (d->insert(409)) << std::endl;
std::cout << (b->insert(226)) << std::endl;
*d=*e;
*b=*e;
*c=*c;
std::cout << (b->insert(272)) << std::endl;
std::cout << (a->insert(301)) << std::endl;
std::cout << (b->insert(345)) << std::endl;
std::cout << (a->remove(127)) << std::endl;
c->printPretty();
d->printPretty();
*c=*e;
std::cout << (c->insert(2)) << std::endl;
std::cout << (d->insert(272)) << std::endl;
std::cout << (e->remove(272)) << std::endl;
std::cout << (c->insert(201)) << std::endl;
*e=*c;
d->printPretty();
std::cout << (e->remove(201)) << std::endl;
std::cout << (e->remove(2)) << std::endl;
*c=*b;
std::cout << (e->insert(287)) << std::endl;
*b=*a;
*d=*e;
std::cout << (a->remove(301)) << std::endl;
d->printPretty();
std::cout << (a->remove(119)) << std::endl;
std::cout << (c->insert(345)) << std::endl;
std::cout << (b->remove(299)) << std::endl;
std::cout << (b->remove(119)) << std::endl;
std::cout << (e->remove(495)) << std::endl;
c->printPretty();
std::cout << (e->remove(14)) << std::endl;
std::cout << (b->insert(301)) << std::endl;
std::cout << (d->insert(272)) << std::endl;
*e=*d;
*a=*a;
std::cout << (b->insert(301)) << std::endl;
std::cout << (b->insert(180)) << std::endl;
std::cout << (c->insert(222)) << std::endl;
d->printPretty();
std::cout << (d->insert(272)) << std::endl;
return 0;
}
