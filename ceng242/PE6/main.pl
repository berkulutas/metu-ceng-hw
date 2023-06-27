:- module(main, [is_vote_wasted/2, is_candidate_elected/2, candidate_count_from_city/3, all_parties/1, all_candidates_from_party/2, all_elected_from_party/2, election_rate/2, council_percentage/2, alternative_debate_setups/2]).
:- [kb].

% DO NOT CHANGE THE UPPER CONTENT, WRITE YOUR CODE AFTER THIS LINE

is_vote_wasted(City, PoliticalParty) :- not(elected(City, PoliticalParty, ElectedRepresentativeCount)).

is_candidate_elected(Name, PoliticalParty) :-
    candidate(Name, PoliticalParty, City, Row),
    elected(City, PoliticalParty, ElectedRepresentativeCount),
    Row =< ElectedRepresentativeCount.

candidate_count_from_city([], _, 0).

candidate_count_from_city([H|T], GivenCity, Count) :-
    candidate(H, _, City, _),
    City = GivenCity,
    candidate_count_from_city(T, GivenCity, NewCount),
    Count is NewCount + 1.

candidate_count_from_city([Head|Tail], GivenCity, Count) :-
    candidate(Head, _, City, _),
    City \= GivenCity,
    candidate_count_from_city(Tail, GivenCity, Count).
    
    
all_parties(ListOfPoliticalParties) :-
    findall(PoliticalParty, party(PoliticalParty, _), ListOfPoliticalParties).

all_candidates_from_party(PoliticalParty, ListOfCandidates) :-
    findall(Cnd, candidate(Cnd, PoliticalParty, _, _), ListOfCandidates).
    
all_elected_from_party(PoliticalParty, ListOfCandidates) :-
    findall(Name,
            (candidate(Name, PoliticalParty, City, Row), elected(City, PoliticalParty, Count), Row =< Count),
            ListOfCandidates).
    
election_rate(PoliticalParty, Percentage) :-
   	all_candidates_from_party(PoliticalParty, AllCandidates),
    all_elected_from_party(PoliticalParty, ElectedCandidates),
    length(AllCandidates, AllCandidatesCount),
    length(ElectedCandidates, ElectedCandidatesCount),
    Percentage is (ElectedCandidatesCount / AllCandidatesCount).
    
sum_list([], 0).
sum_list([H|T], Sum) :-
   sum_list(T, Rest),
   Sum is H + Rest. 

sum_of_all_selected(TotalElectedCount) :-
	findall(ElectedRepresentativeCount, elected(_, _, ElectedRepresentativeCount), RepresentativeCounts),
    sum_list(RepresentativeCounts, TotalElectedCount).     
            
council_percentage(PoliticalParty, Percentage) :-
	all_elected_from_party(PoliticalParty, ElectedCandidates),
	length(ElectedCandidates, ElectedCandidatesCount),
	sum_of_all_selected(TotalElectedCount),
	Percentage is (ElectedCandidatesCount / TotalElectedCount).
	
select_candidate(PartyInitial, UsedCandidates, Candidate) :-
    party(PartyName, PartyInitial),
    candidate(Candidate, PartyName, _, _),
    not(member(Candidate, UsedCandidates)).

create_combinations([], _, []).
create_combinations([H|T], UsedCandidates, [Candidate|Rest]) :-
    select_candidate(H, UsedCandidates, Candidate),
    create_combinations(T, [Candidate|UsedCandidates], Rest).

alternative_debate_setups(DescriptionString, OrderedListOfCandidates) :-
    atom_chars(DescriptionString, PartyInitials),
    create_combinations(PartyInitials, [], OrderedListOfCandidates).
            
