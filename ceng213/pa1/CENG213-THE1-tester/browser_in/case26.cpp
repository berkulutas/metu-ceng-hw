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
Tab A = Tab("nn", "c","zz");
Tab B = Tab("vvv", "f","j");
Tab C = Tab("xx", "i","x");
Tab D = Tab("s", "rrr","ll");
Tab E = Tab("d", "iii","dd");
Tab F = Tab("n", "sss","kk");
Tab G = Tab("fff", "bb","jj");
Tab H = Tab("h", "nnn","j");
Tab I = Tab("ccc", "a","g");
Tab J = Tab("kkk", "ttt","f");
Tab K = Tab("rr", "dd","c");
Tab L = Tab("eee", "i","u");
Tab M = Tab("c", "bb","xxx");
Tab N = Tab("yy", "ttt","xxx");
Tab O = Tab("jjj", "g","pp");
Tab P = Tab("qq", "w","ccc");
Tab Q = Tab("b", "ww","www");
Tab R = Tab("jj", "iii","o");
Tab S = Tab("bbb", "yy","b");
Tab T = Tab("jj", "s","ttt");
Tab U = Tab("f", "yy","ii");
Tab V = Tab("qq", "ooo","gg");
Tab W = Tab("ee", "z","y");
Tab X = Tab("p", "zz","hh");
Tab Y = Tab("hhh", "i","dd");
Tab Z = Tab("oo", "cc","vvv");
a.newTab(A);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(B);
b.changeActiveTabTo(0);
c.newTab(C);
d.moveActiveTabTo(0);
a.newTab(D);
b.moveActiveTabTo(3);
c.newTab(E);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.newTab(F);
c.newTab(G);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(H);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(I);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(J);
a.moveActiveTabTo(3);
b.newTab(K);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(L);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(M);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(N);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(O);
b.changeActiveTabTo(1);
c.newTab(P);
d.newTab(Q);
a.moveActiveTabTo(3);
b.newTab(R);
c.newTab(S);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(T);
c.newTab(U);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(V);
a.newTab(W);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.newTab(X);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.newTab(Y);
c.moveActiveTabTo(2);
d.newTab(Z);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(8);
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(4);
brows->print();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(8);
brows->print();
brows->getWindow(1);
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->closeWindow();
brows->newWindow();
brows->getWindow(4);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->getWindow(6);
brows->closeWindow();
brows->print();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(5);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(2);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->getWindow(2);
brows->switchToWindow(1);
brows->getWindow(5);
brows->closeWindow();
brows->print();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->getWindow(2);
brows->switchToWindow(3);
brows->newWindow();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->getWindow(1);
brows->print();
brows->switchToWindow(2);
brows->newWindow();
brows->getWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->switchToWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
};