#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(190)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
*a=*b;
a->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *e=new ScapegoatTree<int>;
c->printPretty();
*b=*a;
std::cout << (a->remove(302)) << std::endl;
b->printPretty();
std::cout << (b->insert(88)) << std::endl;
std::cout << (a->remove(463)) << std::endl;
std::cout << (a->remove(490)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
std::cout << (a->insert(300)) << std::endl;
std::cout << (a->insert(300)) << std::endl;
d->printPretty();
std::cout << (a->remove(300)) << std::endl;
std::cout << (b->remove(88)) << std::endl;
*b=*a;
e->printPretty();
d->printPretty();
e->printPretty();
std::cout << (c->insert(207)) << std::endl;
std::cout << (d->remove(114)) << std::endl;
a->printPretty();
*a=*b;
std::cout << (c->remove(266)) << std::endl;
std::cout << (e->insert(386)) << std::endl;
a->printPretty();
std::cout << (d->remove(289)) << std::endl;
std::cout << (e->insert(386)) << std::endl;
std::cout << (e->remove(459)) << std::endl;
std::cout << (a->insert(1)) << std::endl;
a->printPretty();
std::cout << (c->remove(207)) << std::endl;
*b=*b;
std::cout << (e->insert(331)) << std::endl;
*a=*a;
std::cout << (e->remove(216)) << std::endl;
*c=*b;
*d=*b;
std::cout << (e->remove(386)) << std::endl;
std::cout << (d->remove(494)) << std::endl;
std::cout << (a->insert(104)) << std::endl;
std::cout << (d->insert(341)) << std::endl;
*b=*a;
e->printPretty();
std::cout << (b->remove(104)) << std::endl;
std::cout << (b->insert(393)) << std::endl;
std::cout << (d->insert(256)) << std::endl;
*e=*a;
*d=*d;
std::cout << (a->remove(1)) << std::endl;
*c=*c;
c->printPretty();
e->printPretty();
std::cout << (e->remove(104)) << std::endl;
std::cout << (e->insert(1)) << std::endl;
std::cout << (d->remove(57)) << std::endl;
std::cout << (a->remove(104)) << std::endl;
std::cout << (c->remove(332)) << std::endl;
std::cout << (e->insert(78)) << std::endl;
std::cout << (e->insert(197)) << std::endl;
*e=*a;
*a=*c;
std::cout << (e->insert(121)) << std::endl;
std::cout << (b->remove(393)) << std::endl;
b->printPretty();
std::cout << (a->remove(13)) << std::endl;
std::cout << (d->insert(337)) << std::endl;
std::cout << (e->remove(121)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (e->insert(59)) << std::endl;
std::cout << (b->remove(45)) << std::endl;
std::cout << (a->insert(75)) << std::endl;
std::cout << (d->insert(405)) << std::endl;
std::cout << (b->insert(1)) << std::endl;
std::cout << (d->insert(363)) << std::endl;
d->printPretty();
std::cout << (b->insert(1)) << std::endl;
std::cout << (e->remove(59)) << std::endl;
std::cout << (d->remove(450)) << std::endl;
b->printPretty();
std::cout << (d->insert(251)) << std::endl;
std::cout << (a->remove(274)) << std::endl;
std::cout << (d->remove(85)) << std::endl;
e->printPretty();
b->printPretty();
d->printPretty();
*c=*e;
std::cout << (a->insert(429)) << std::endl;
a->printPretty();
std::cout << (b->insert(1)) << std::endl;
e->printPretty();
std::cout << (c->insert(354)) << std::endl;
e->printPretty();
std::cout << (b->insert(407)) << std::endl;
*e=*e;
std::cout << (c->remove(199)) << std::endl;
std::cout << (b->remove(455)) << std::endl;
*d=*b;
std::cout << (a->insert(75)) << std::endl;
*b=*b;
e->printPretty();
std::cout << (b->insert(477)) << std::endl;
*e=*b;
*c=*c;
std::cout << (e->remove(407)) << std::endl;
std::cout << (e->insert(477)) << std::endl;
c->printPretty();
std::cout << (a->remove(75)) << std::endl;
std::cout << (c->insert(354)) << std::endl;
std::cout << (b->insert(401)) << std::endl;
std::cout << (c->remove(496)) << std::endl;
std::cout << (b->remove(143)) << std::endl;
std::cout << (b->insert(407)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (e->remove(1)) << std::endl;
std::cout << (e->remove(477)) << std::endl;
std::cout << (b->insert(168)) << std::endl;
std::cout << (c->remove(354)) << std::endl;
*b=*e;
std::cout << (e->remove(490)) << std::endl;
std::cout << (c->remove(414)) << std::endl;
d->printPretty();
d->printPretty();
b->printPretty();
*e=*a;
*d=*d;
*d=*c;
std::cout << (b->insert(163)) << std::endl;
std::cout << (b->remove(22)) << std::endl;
*b=*d;
*a=*e;
c->printPretty();
std::cout << (a->insert(429)) << std::endl;
std::cout << (b->insert(433)) << std::endl;
*e=*e;
std::cout << (a->remove(434)) << std::endl;
std::cout << (d->insert(105)) << std::endl;
*e=*c;
std::cout << (a->insert(144)) << std::endl;
e->printPretty();
*a=*b;
std::cout << (a->remove(329)) << std::endl;
std::cout << (c->insert(204)) << std::endl;
std::cout << (d->remove(497)) << std::endl;
a->printPretty();
std::cout << (a->insert(267)) << std::endl;
std::cout << (d->insert(484)) << std::endl;
std::cout << (a->insert(267)) << std::endl;
std::cout << (a->insert(267)) << std::endl;
std::cout << (a->remove(267)) << std::endl;
e->printPretty();
std::cout << (d->insert(341)) << std::endl;
*c=*d;
c->printPretty();
std::cout << (d->insert(105)) << std::endl;
*a=*c;
*d=*d;
std::cout << (e->remove(145)) << std::endl;
e->printPretty();
*b=*e;
a->printPretty();
*d=*c;
std::cout << (d->remove(341)) << std::endl;
std::cout << (b->insert(240)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (c->insert(105)) << std::endl;
std::cout << (d->remove(168)) << std::endl;
std::cout << (c->insert(484)) << std::endl;
std::cout << (e->insert(26)) << std::endl;
std::cout << (e->remove(26)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (d->remove(484)) << std::endl;
std::cout << (d->remove(120)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
*b=*e;
e->printPretty();
std::cout << (a->insert(495)) << std::endl;
std::cout << (a->remove(405)) << std::endl;
std::cout << (a->insert(341)) << std::endl;
*a=*d;
*e=*c;
std::cout << (c->insert(467)) << std::endl;
std::cout << (b->remove(109)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
*c=*b;
std::cout << (b->remove(21)) << std::endl;
b->printPretty();
std::cout << (e->insert(124)) << std::endl;
std::cout << (a->remove(219)) << std::endl;
c->printPretty();
b->printPretty();
e->printPretty();
std::cout << (e->remove(341)) << std::endl;
*c=*d;
std::cout << (e->remove(77)) << std::endl;
*d=*c;
std::cout << (a->remove(4)) << std::endl;
std::cout << (d->remove(105)) << std::endl;
std::cout << (e->remove(231)) << std::endl;
std::cout << (e->remove(20)) << std::endl;
std::cout << (c->insert(46)) << std::endl;
std::cout << (c->insert(40)) << std::endl;
std::cout << (e->remove(105)) << std::endl;
*a=*c;
std::cout << (b->insert(40)) << std::endl;
std::cout << (e->insert(484)) << std::endl;
std::cout << (e->remove(467)) << std::endl;
*c=*c;
std::cout << (c->remove(282)) << std::endl;
std::cout << (a->insert(467)) << std::endl;
std::cout << (a->insert(412)) << std::endl;
std::cout << (b->remove(40)) << std::endl;
std::cout << (a->remove(457)) << std::endl;
b->printPretty();
*a=*d;
std::cout << (d->remove(63)) << std::endl;
std::cout << (c->remove(40)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
std::cout << (a->insert(46)) << std::endl;
d->printPretty();
std::cout << (a->remove(46)) << std::endl;
a->printPretty();
std::cout << (b->remove(361)) << std::endl;
std::cout << (c->remove(46)) << std::endl;
std::cout << (c->remove(105)) << std::endl;
std::cout << (b->remove(185)) << std::endl;
std::cout << (e->insert(85)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
d->printPretty();
std::cout << (a->remove(499)) << std::endl;
std::cout << (e->remove(484)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
std::cout << (b->insert(242)) << std::endl;
std::cout << (c->remove(478)) << std::endl;
std::cout << (e->remove(85)) << std::endl;
b->printPretty();
std::cout << (a->insert(241)) << std::endl;
std::cout << (b->remove(242)) << std::endl;
a->printPretty();
std::cout << (a->remove(281)) << std::endl;
std::cout << (b->insert(351)) << std::endl;
std::cout << (d->remove(46)) << std::endl;
a->printPretty();
*c=*a;
std::cout << (a->remove(241)) << std::endl;
b->printPretty();
std::cout << (b->remove(351)) << std::endl;
d->printPretty();
std::cout << (e->remove(124)) << std::endl;
std::cout << (c->insert(241)) << std::endl;
std::cout << (c->insert(241)) << std::endl;
e->printPretty();
*b=*c;
*b=*b;
std::cout << (a->insert(302)) << std::endl;
std::cout << (c->remove(246)) << std::endl;
std::cout << (e->remove(279)) << std::endl;
std::cout << (b->remove(241)) << std::endl;
*e=*d;
b->printPretty();
std::cout << (c->insert(174)) << std::endl;
a->printPretty();
*d=*a;
*e=*a;
std::cout << (d->insert(302)) << std::endl;
e->printPretty();
*a=*b;
*d=*e;
std::cout << (e->insert(390)) << std::endl;
std::cout << (b->insert(13)) << std::endl;
std::cout << (e->remove(191)) << std::endl;
std::cout << (e->insert(302)) << std::endl;
std::cout << (e->insert(302)) << std::endl;
b->printPretty();
c->printPretty();
std::cout << (d->remove(302)) << std::endl;
*b=*d;
b->printPretty();
std::cout << (e->remove(302)) << std::endl;
*b=*b;
std::cout << (d->remove(298)) << std::endl;
std::cout << (e->insert(26)) << std::endl;
std::cout << (e->remove(390)) << std::endl;
std::cout << (d->remove(99)) << std::endl;
std::cout << (e->remove(351)) << std::endl;
e->printPretty();
std::cout << (c->insert(174)) << std::endl;
std::cout << (d->remove(366)) << std::endl;
std::cout << (c->insert(430)) << std::endl;
std::cout << (a->insert(351)) << std::endl;
std::cout << (c->remove(355)) << std::endl;
std::cout << (a->remove(298)) << std::endl;
*d=*c;
*c=*a;
std::cout << (e->remove(34)) << std::endl;
std::cout << (d->insert(459)) << std::endl;
std::cout << (e->remove(26)) << std::endl;
std::cout << (d->insert(241)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (c->insert(232)) << std::endl;
e->printPretty();
std::cout << (c->insert(196)) << std::endl;
d->printPretty();
*e=*e;
std::cout << (d->insert(430)) << std::endl;
std::cout << (a->insert(351)) << std::endl;
*d=*b;
*e=*e;
a->printPretty();
std::cout << (d->insert(333)) << std::endl;
*b=*d;
std::cout << (e->insert(109)) << std::endl;
std::cout << (b->remove(333)) << std::endl;
*d=*c;
a->printPretty();
d->printPretty();
std::cout << (b->remove(120)) << std::endl;
std::cout << (e->insert(109)) << std::endl;
std::cout << (c->remove(414)) << std::endl;
*b=*a;
std::cout << (e->insert(109)) << std::endl;
b->printPretty();
std::cout << (b->insert(351)) << std::endl;
std::cout << (c->insert(196)) << std::endl;
*e=*c;
e->printPretty();
std::cout << (d->remove(396)) << std::endl;
std::cout << (c->remove(351)) << std::endl;
a->printPretty();
*b=*e;
*a=*e;
c->printPretty();
std::cout << (e->remove(351)) << std::endl;
std::cout << (c->insert(321)) << std::endl;
std::cout << (d->remove(342)) << std::endl;
*a=*e;
std::cout << (c->insert(232)) << std::endl;
std::cout << (e->remove(175)) << std::endl;
std::cout << (d->insert(448)) << std::endl;
std::cout << (c->remove(321)) << std::endl;
std::cout << (d->insert(448)) << std::endl;
std::cout << (a->insert(196)) << std::endl;
std::cout << (a->insert(196)) << std::endl;
std::cout << (b->insert(196)) << std::endl;
*c=*e;
std::cout << (d->insert(448)) << std::endl;
std::cout << (c->remove(196)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
a->printPretty();
std::cout << (c->remove(308)) << std::endl;
std::cout << (b->remove(480)) << std::endl;
std::cout << (b->insert(351)) << std::endl;
*b=*e;
std::cout << (d->insert(483)) << std::endl;
std::cout << (e->remove(177)) << std::endl;
*a=*e;
std::cout << (e->remove(232)) << std::endl;
*d=*e;
std::cout << (c->insert(164)) << std::endl;
std::cout << (b->insert(196)) << std::endl;
std::cout << (a->insert(232)) << std::endl;
std::cout << (c->remove(479)) << std::endl;
*a=*a;
b->printPretty();
std::cout << (e->insert(196)) << std::endl;
std::cout << (c->remove(109)) << std::endl;
a->printPretty();
std::cout << (a->insert(19)) << std::endl;
std::cout << (d->insert(461)) << std::endl;
*a=*a;
std::cout << (c->insert(232)) << std::endl;
*a=*a;
e->printPretty();
std::cout << (d->remove(164)) << std::endl;
b->printPretty();
std::cout << (e->remove(196)) << std::endl;
std::cout << (c->remove(164)) << std::endl;
a->printPretty();
std::cout << (e->remove(223)) << std::endl;
a->printPretty();
std::cout << (a->remove(423)) << std::endl;
c->printPretty();
std::cout << (c->insert(232)) << std::endl;
std::cout << (c->remove(232)) << std::endl;
std::cout << (a->insert(404)) << std::endl;
std::cout << (a->remove(148)) << std::endl;
c->printPretty();
*c=*d;
std::cout << (a->remove(196)) << std::endl;
std::cout << (a->insert(19)) << std::endl;
std::cout << (b->remove(196)) << std::endl;
*b=*c;
std::cout << (e->insert(370)) << std::endl;
std::cout << (a->insert(166)) << std::endl;
std::cout << (e->insert(239)) << std::endl;
c->printPretty();
*d=*d;
std::cout << (d->remove(7)) << std::endl;
std::cout << (e->insert(404)) << std::endl;
std::cout << (d->remove(196)) << std::endl;
std::cout << (b->remove(96)) << std::endl;
std::cout << (a->insert(166)) << std::endl;
std::cout << (a->insert(404)) << std::endl;
std::cout << (e->remove(404)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (d->insert(475)) << std::endl;
*b=*a;
std::cout << (e->remove(445)) << std::endl;
std::cout << (a->insert(488)) << std::endl;
*c=*a;
std::cout << (c->remove(75)) << std::endl;
std::cout << (d->insert(21)) << std::endl;
e->printPretty();
std::cout << (b->remove(383)) << std::endl;
*d=*d;
e->printPretty();
std::cout << (b->insert(166)) << std::endl;
std::cout << (b->insert(334)) << std::endl;
std::cout << (d->insert(130)) << std::endl;
b->printPretty();
std::cout << (c->remove(10)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (d->insert(130)) << std::endl;
std::cout << (c->insert(473)) << std::endl;
std::cout << (a->insert(404)) << std::endl;
*d=*d;
std::cout << (d->remove(445)) << std::endl;
std::cout << (c->remove(232)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (d->insert(475)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (a->remove(450)) << std::endl;
std::cout << (b->remove(404)) << std::endl;
std::cout << (d->insert(405)) << std::endl;
c->printPretty();
std::cout << (c->remove(160)) << std::endl;
*d=*b;
*b=*a;
std::cout << (c->remove(370)) << std::endl;
std::cout << (c->insert(166)) << std::endl;
std::cout << (a->insert(371)) << std::endl;
std::cout << (c->remove(19)) << std::endl;
std::cout << (e->remove(8)) << std::endl;
std::cout << (c->insert(473)) << std::endl;
std::cout << (e->remove(370)) << std::endl;
std::cout << (a->insert(19)) << std::endl;
std::cout << (d->insert(232)) << std::endl;
std::cout << (c->remove(1)) << std::endl;
std::cout << (e->insert(322)) << std::endl;
std::cout << (a->insert(245)) << std::endl;
std::cout << (b->insert(270)) << std::endl;
std::cout << (e->insert(280)) << std::endl;
std::cout << (e->remove(36)) << std::endl;
std::cout << (e->remove(239)) << std::endl;
std::cout << (d->insert(34)) << std::endl;
c->printPretty();
*c=*d;
std::cout << (e->insert(329)) << std::endl;
std::cout << (d->insert(103)) << std::endl;
std::cout << (c->remove(232)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
*c=*e;
std::cout << (a->remove(166)) << std::endl;
std::cout << (d->insert(21)) << std::endl;
b->printPretty();
*d=*b;
std::cout << (a->remove(488)) << std::endl;
std::cout << (e->insert(329)) << std::endl;
std::cout << (b->insert(432)) << std::endl;
std::cout << (b->remove(284)) << std::endl;
std::cout << (c->insert(257)) << std::endl;
c->printPretty();
std::cout << (e->remove(413)) << std::endl;
*a=*c;
d->printPretty();
a->printPretty();
std::cout << (e->insert(329)) << std::endl;
*a=*c;
std::cout << (d->remove(232)) << std::endl;
std::cout << (b->insert(148)) << std::endl;
c->printPretty();
std::cout << (b->remove(129)) << std::endl;
c->printPretty();
std::cout << (e->remove(454)) << std::endl;
*c=*b;
std::cout << (a->insert(499)) << std::endl;
a->printPretty();
std::cout << (d->insert(290)) << std::endl;
*c=*c;
*e=*b;
std::cout << (e->remove(30)) << std::endl;
std::cout << (d->remove(488)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (b->remove(270)) << std::endl;
std::cout << (c->remove(270)) << std::endl;
a->printPretty();
std::cout << (a->insert(348)) << std::endl;
std::cout << (a->remove(257)) << std::endl;
a->printPretty();
std::cout << (a->remove(348)) << std::endl;
std::cout << (b->insert(404)) << std::endl;
std::cout << (b->insert(19)) << std::endl;
b->printPretty();
c->printPretty();
d->printPretty();
b->printPretty();
std::cout << (c->remove(232)) << std::endl;
e->printPretty();
std::cout << (d->insert(404)) << std::endl;
*b=*c;
std::cout << (d->remove(234)) << std::endl;
a->printPretty();
std::cout << (c->remove(376)) << std::endl;
c->printPretty();
std::cout << (a->remove(37)) << std::endl;
std::cout << (c->remove(189)) << std::endl;
*a=*e;
std::cout << (d->remove(305)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (c->insert(166)) << std::endl;
std::cout << (e->remove(404)) << std::endl;
a->printPretty();
std::cout << (d->remove(185)) << std::endl;
c->printPretty();
std::cout << (a->insert(232)) << std::endl;
std::cout << (d->insert(404)) << std::endl;
std::cout << (b->insert(7)) << std::endl;
std::cout << (d->insert(290)) << std::endl;
d->printPretty();
std::cout << (a->insert(225)) << std::endl;
a->printPretty();
*a=*a;
a->printPretty();
std::cout << (b->remove(7)) << std::endl;
std::cout << (d->insert(372)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
*e=*d;
std::cout << (e->remove(73)) << std::endl;
a->printPretty();
std::cout << (e->insert(377)) << std::endl;
b->printPretty();
std::cout << (d->remove(68)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (a->remove(232)) << std::endl;
std::cout << (e->remove(404)) << std::endl;
std::cout << (a->insert(225)) << std::endl;
std::cout << (c->remove(444)) << std::endl;
std::cout << (c->insert(462)) << std::endl;
std::cout << (c->remove(346)) << std::endl;
*d=*e;
e->printPretty();
std::cout << (e->insert(294)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (d->insert(377)) << std::endl;
std::cout << (d->remove(19)) << std::endl;
std::cout << (c->insert(19)) << std::endl;
std::cout << (b->remove(166)) << std::endl;
*e=*e;
std::cout << (a->insert(19)) << std::endl;
std::cout << (d->remove(89)) << std::endl;
std::cout << (e->insert(432)) << std::endl;
std::cout << (e->insert(313)) << std::endl;
std::cout << (e->remove(19)) << std::endl;
c->printPretty();
std::cout << (c->insert(404)) << std::endl;
std::cout << (c->remove(432)) << std::endl;
d->printPretty();
std::cout << (c->insert(226)) << std::endl;
a->printPretty();
std::cout << (a->insert(270)) << std::endl;
std::cout << (b->remove(53)) << std::endl;
std::cout << (c->insert(183)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
a->printPretty();
std::cout << (b->remove(197)) << std::endl;
std::cout << (b->insert(148)) << std::endl;
std::cout << (a->remove(225)) << std::endl;
std::cout << (c->insert(148)) << std::endl;
std::cout << (b->insert(404)) << std::endl;
*a=*c;
std::cout << (d->remove(372)) << std::endl;
std::cout << (a->remove(72)) << std::endl;
std::cout << (e->remove(16)) << std::endl;
std::cout << (d->insert(81)) << std::endl;
std::cout << (b->insert(289)) << std::endl;
std::cout << (b->remove(10)) << std::endl;
std::cout << (a->insert(289)) << std::endl;
e->printPretty();
std::cout << (d->insert(203)) << std::endl;
std::cout << (c->remove(166)) << std::endl;
std::cout << (d->remove(122)) << std::endl;
*d=*c;
std::cout << (b->remove(404)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
c->printPretty();
std::cout << (a->remove(70)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
a->printPretty();
std::cout << (e->insert(331)) << std::endl;
std::cout << (c->insert(305)) << std::endl;
*e=*e;
*a=*c;
b->printPretty();
*e=*a;
*b=*d;
*a=*e;
c->printPretty();
std::cout << (c->insert(325)) << std::endl;
std::cout << (e->insert(51)) << std::endl;
*a=*c;
std::cout << (c->remove(92)) << std::endl;
std::cout << (c->remove(349)) << std::endl;
std::cout << (a->insert(118)) << std::endl;
std::cout << (d->insert(205)) << std::endl;
std::cout << (d->remove(410)) << std::endl;
std::cout << (d->remove(287)) << std::endl;
a->printPretty();
*e=*b;
std::cout << (c->insert(116)) << std::endl;
*c=*a;
*a=*c;
std::cout << (b->remove(19)) << std::endl;
std::cout << (a->insert(224)) << std::endl;
std::cout << (e->insert(63)) << std::endl;
std::cout << (c->insert(252)) << std::endl;
std::cout << (a->insert(286)) << std::endl;
c->printPretty();
std::cout << (d->insert(488)) << std::endl;
std::cout << (c->insert(305)) << std::endl;
*d=*e;
std::cout << (b->insert(398)) << std::endl;
*a=*d;
c->printPretty();
a->printPretty();
std::cout << (c->insert(488)) << std::endl;
*c=*b;
std::cout << (c->remove(403)) << std::endl;
a->printPretty();
c->printPretty();
e->printPretty();
std::cout << (a->insert(275)) << std::endl;
std::cout << (a->insert(433)) << std::endl;
std::cout << (d->remove(148)) << std::endl;
std::cout << (c->remove(173)) << std::endl;
*b=*c;
std::cout << (d->remove(139)) << std::endl;
std::cout << (c->remove(404)) << std::endl;
std::cout << (e->insert(389)) << std::endl;
*c=*e;
std::cout << (e->insert(462)) << std::endl;
std::cout << (b->insert(174)) << std::endl;
std::cout << (e->remove(77)) << std::endl;
*c=*b;
std::cout << (c->remove(365)) << std::endl;
std::cout << (a->insert(19)) << std::endl;
std::cout << (d->insert(167)) << std::endl;
std::cout << (a->insert(109)) << std::endl;
*a=*a;
std::cout << (b->insert(441)) << std::endl;
std::cout << (b->insert(174)) << std::endl;
std::cout << (a->remove(48)) << std::endl;
std::cout << (d->remove(183)) << std::endl;
std::cout << (e->insert(264)) << std::endl;
*d=*e;
b->printPretty();
std::cout << (a->insert(421)) << std::endl;
std::cout << (c->insert(183)) << std::endl;
c->printPretty();
std::cout << (b->insert(319)) << std::endl;
b->printPretty();
std::cout << (c->remove(404)) << std::endl;
std::cout << (b->remove(226)) << std::endl;
std::cout << (d->insert(462)) << std::endl;
std::cout << (c->insert(183)) << std::endl;
*b=*d;
std::cout << (d->remove(148)) << std::endl;
std::cout << (b->remove(253)) << std::endl;
std::cout << (c->insert(174)) << std::endl;
std::cout << (d->insert(488)) << std::endl;
*d=*d;
std::cout << (d->insert(63)) << std::endl;
std::cout << (e->remove(166)) << std::endl;
std::cout << (d->remove(36)) << std::endl;
std::cout << (c->remove(174)) << std::endl;
std::cout << (a->insert(148)) << std::endl;
a->printPretty();
std::cout << (c->insert(148)) << std::endl;
std::cout << (e->remove(138)) << std::endl;
std::cout << (b->remove(349)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
std::cout << (b->insert(136)) << std::endl;
std::cout << (b->remove(25)) << std::endl;
std::cout << (b->insert(264)) << std::endl;
std::cout << (b->remove(133)) << std::endl;
d->printPretty();
std::cout << (c->insert(462)) << std::endl;
std::cout << (c->insert(275)) << std::endl;
std::cout << (a->remove(443)) << std::endl;
std::cout << (e->remove(63)) << std::endl;
*d=*d;
std::cout << (a->insert(369)) << std::endl;
std::cout << (d->remove(389)) << std::endl;
*e=*d;
*a=*a;
std::cout << (c->insert(496)) << std::endl;
std::cout << (b->insert(333)) << std::endl;
std::cout << (e->remove(63)) << std::endl;
std::cout << (b->remove(363)) << std::endl;
b->printPretty();
std::cout << (b->remove(444)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
return 0;
}
