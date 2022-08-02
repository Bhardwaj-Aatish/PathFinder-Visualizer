what is the project(features)
    This project is based on graph algorithms
    
    it helps to visualize path finding graph algos
        like dis, a*, bfs, dfs
    
    this is built using react js

     // uses css animations extensively
----
	So, in project
    there is an entire grid of notes 
        the user provides the source and destination as input
        then the user provides the nodes which are not allowed to visit
        	just like in google maps there are area in which we can drive upon 
        		like house and residential area  etc. 
    
        then we find the path from source to destination using the chosen graph algorithm
      
    I have used react js used bcz it provides us with the concept of states,
        states help us to store the visited nodes in order, 
        	and we are able to go back certain steps in the path

what is states
	reactive dynamic values/variables
  they store the information about the component at any instance of time
  react changes ko see krta h
  when changed, it re renders the components  . 
  fxnal components access states using useState hook
  

  

===============================
QUESTIONS 
  best algorithms in best ?
     bfs - 
     		stands for bfs
        explores neighbours first then goes deeper levels
        queue generally used to implement
     		in unweighted graph to find shortest distance 
    dfs
    	stands for dfs
      backtracking used, stack used to implement
      goes to deeper levels of each neighbour before moving on to the next neighbour
      to find all possible paths 
      
     dijstra's - to find shortest distance in weighted graph and graph should not have any negative weight cycle 
     A*    -- optimisation of distra's algorithm 
             ()
             
    --
      defination 
      implement how's
      data stucture used 
      uses in real life 
      which one is best in  which condition
      

uses
	google maps, cars, routing optimizations are done using AI(heuristic algos like A*),

use?
    react js, graph algos

Why use given tech stack 
    



Difficulties faced in your projects 
   


----------
App.js
	Navbar
  pathfindingVisualizer 

     
pathfindingVisulizer --component 
	node component
  table
  	nodes
    	row, col, isFinish, isStart, isWall, 
    why id?
       
  //  buttons 7
      	4 algos, 2 clear, 1 view

Node component
	took props from pathfinding
	return table data-> class name add if reqrd, 
  3 events mousedown,up,enter



fxn -> dij 
	
  visited-> all visited nodes in same order as traversed by the algorithm -> (array data structure to  store visted nodes )

button click
	visualize function 
  	cleargrid -- previous shown path got deleted ; 
    togglerunning -- now prevent any other functionalities to run 
    grid
    start end
    switch case
    	select fxn to call -> fxn return array visited nodes in order when reach destination
    
    find shortestPath-> states me stored h parent-> end me end push
			source ka parent null

css
	keyframes
