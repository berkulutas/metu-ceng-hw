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
Tab A = Tab("nn", "nnn","v");
Tab B = Tab("jj", "zz","fff");
Tab C = Tab("t", "iii","dd");
Tab D = Tab("vvv", "sss","sss");
Tab E = Tab("tt", "tt","ttt");
Tab F = Tab("b", "ggg","eee");
Tab G = Tab("jj", "gg","ll");
Tab H = Tab("u", "b","dd");
Tab I = Tab("i", "f","kk");
Tab J = Tab("yy", "hhh","n");
Tab K = Tab("fff", "z","pp");
Tab L = Tab("yyy", "h","sss");
Tab M = Tab("d", "ooo","jjj");
Tab N = Tab("tt", "bbb","mmm");
Tab O = Tab("mm", "yyy","w");
Tab P = Tab("nn", "dd","i");
Tab Q = Tab("s", "ii","nnn");
Tab R = Tab("ddd", "qq","iii");
Tab S = Tab("uu", "v","ll");
Tab T = Tab("w", "ppp","ee");
Tab U = Tab("aaa", "e","l");
Tab V = Tab("k", "i","y");
Tab W = Tab("jj", "k","aa");
Tab X = Tab("y", "dd","hhh");
Tab Y = Tab("j", "ttt","vvv");
Tab Z = Tab("w", "hh","zzz");
a.newTab(A);
b.newTab(B);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(C);
b.changeActiveTabTo(3);
c.newTab(D);
d.newTab(E);
a.moveActiveTabTo(5);
b.newTab(F);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(G);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(H);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(I);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.newTab(J);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.newTab(K);
c.newTab(L);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.newTab(M);
c.moveActiveTabTo(1);
d.newTab(N);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(O);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(P);
d.newTab(Q);
a.newTab(R);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(S);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.newTab(T);
c.changeActiveTabTo(2);
d.newTab(U);
a.newTab(V);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(W);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(X);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(Y);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(Z);
d.newTab(Z);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(2);
brows->switchToWindow(9);
brows->print();
brows->switchToWindow(4);
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(9);
brows->newWindow();
brows->getWindow(1);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(0);
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(8);
brows->print();
brows->print();
brows->switchToWindow(2);
brows->switchToWindow(4);
brows->switchToWindow(0);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(1);
brows->switchToWindow(4);
brows->print();
brows->newWindow();
brows->switchToWindow(4);
brows->print();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(3);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(3);
brows->switchToWindow(9);
brows->print();
brows->switchToWindow(0);
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->getWindow(4);
brows->switchToWindow(6);
brows->print();
brows->getWindow(9);
brows->print();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->switchToWindow(6);
brows->print();
brows->newWindow();
brows->print();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->getWindow(0);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
};