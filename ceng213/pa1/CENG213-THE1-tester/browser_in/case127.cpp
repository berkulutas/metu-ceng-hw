#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("hh", "t","eee");
Tab B = Tab("vvv", "nn","qqq");
Tab C = Tab("vvv", "ppp","f");
Tab D = Tab("ll", "nn","yyy");
Tab E = Tab("bbb", "yyy","zzz");
Tab F = Tab("dd", "mm","cc");
Tab G = Tab("j", "kk","jj");
Tab H = Tab("jj", "y","aa");
Tab I = Tab("ee", "t","hh");
Tab J = Tab("n", "h","mm");
Tab K = Tab("ccc", "cc","nn");
Tab L = Tab("ooo", "zz","ii");
Tab M = Tab("oo", "z","g");
Tab N = Tab("pp", "qq","jj");
Tab O = Tab("nnn", "lll","kk");
Tab P = Tab("eee", "ggg","ll");
Tab Q = Tab("yyy", "d","ii");
Tab R = Tab("x", "bb","kk");
Tab S = Tab("x", "hhh","sss");
Tab T = Tab("ggg", "e","ss");
Tab U = Tab("bb", "l","z");
Tab V = Tab("ii", "hh","ggg");
Tab W = Tab("ppp", "d","rr");
Tab X = Tab("ccc", "q","v");
Tab Y = Tab("ccc", "lll","tt");
Tab Z = Tab("xx", "kkk","g");
a.changeActiveTabTo(2);
b.newTab(A);
c.newTab(B);
d.newTab(C);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(D);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(E);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(F);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(G);
d.moveActiveTabTo(0);
a.newTab(H);
b.newTab(I);
c.newTab(J);
d.changeActiveTabTo(4);
a.newTab(K);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(L);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(M);
b.newTab(N);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(O);
b.changeActiveTabTo(5);
c.newTab(P);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(Q);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(R);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(S);
d.changeActiveTabTo(0);
a.newTab(T);
b.newTab(U);
c.newTab(V);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(W);
a.newTab(X);
b.newTab(Y);
c.newTab(Z);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
d.moveActiveTabTo(4);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
b.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.moveActiveTabTo(1);
b.changeActiveTabTo(1);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(3);
brows->closeWindow();
brows->closeWindow();
brows->getWindow(9);
brows->switchToWindow(8);
brows->getWindow(7);
brows->switchToWindow(8);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->switchToWindow(1);
brows->getWindow(1);
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->getWindow(6);
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->getWindow(1);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(4);
brows->print();
brows->getWindow(4);
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(7);
brows->switchToWindow(8);
brows->getWindow(5);
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(6);
brows->newWindow();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(7);
brows->newWindow();
brows->getWindow(2);
brows->getWindow(5);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(6);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->print();
delete brows;
}
	return 0;
};