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
Tab A = Tab("q", "tt","oo");
Tab B = Tab("bb", "bbb","f");
Tab C = Tab("dd", "ii","s");
Tab D = Tab("bb", "v","dd");
Tab E = Tab("a", "ss","uu");
Tab F = Tab("n", "y","lll");
Tab G = Tab("uu", "h","kk");
Tab H = Tab("ppp", "jjj","jjj");
Tab I = Tab("iii", "vv","pp");
Tab J = Tab("ttt", "fff","ggg");
Tab K = Tab("iii", "i","d");
Tab L = Tab("aaa", "ss","kk");
Tab M = Tab("zzz", "qqq","ooo");
Tab N = Tab("pp", "zz","jj");
Tab O = Tab("a", "fff","bb");
Tab P = Tab("cc", "sss","kk");
Tab Q = Tab("mmm", "h","dd");
Tab R = Tab("j", "aaa","k");
Tab S = Tab("j", "ppp","aaa");
Tab T = Tab("qqq", "dd","cc");
Tab U = Tab("xxx", "ppp","v");
Tab V = Tab("yyy", "m","hhh");
Tab W = Tab("oo", "zzz","i");
Tab X = Tab("hh", "c","vv");
Tab Y = Tab("k", "xxx","zz");
Tab Z = Tab("zz", "hhh","f");
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.newTab(A);
d.changeActiveTabTo(4);
a.newTab(B);
b.newTab(C);
c.newTab(D);
d.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(E);
b.newTab(F);
c.newTab(G);
d.newTab(H);
a.moveActiveTabTo(0);
b.newTab(I);
c.newTab(J);
d.changeActiveTabTo(0);
a.newTab(K);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(L);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(M);
a.newTab(N);
b.moveActiveTabTo(1);
c.newTab(O);
d.newTab(P);
a.moveActiveTabTo(0);
b.newTab(Q);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(R);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(S);
b.newTab(T);
c.newTab(U);
d.newTab(V);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(W);
b.moveActiveTabTo(1);
c.newTab(X);
d.newTab(Y);
a.moveActiveTabTo(3);
b.newTab(Z);
c.newTab(Z);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->switchToWindow(6);
brows->getWindow(8);
brows->closeWindow();
brows->print();
brows->switchToWindow(9);
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(2);
brows->switchToWindow(6);
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->print();
brows->switchToWindow(2);
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->getWindow(9);
brows->switchToWindow(4);
brows->getWindow(5);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->switchToWindow(3);
brows->closeWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->newWindow();
brows->newWindow();
brows->getWindow(2);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(5);
brows->switchToWindow(0);
brows->getWindow(5);
brows->getWindow(7);
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->getWindow(6);
brows->newWindow();
brows->newWindow();
brows->print();
brows->print();
brows->closeWindow();
brows->switchToWindow(1);
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->print();
brows->print();
brows->getWindow(4);
brows->mergeAllWindows();
delete brows;
}
	return 0;
};