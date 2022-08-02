import React from 'react';
import './App.css';
import Navbar from './Navbar';
// import Navbar from './Navbar';
import PathfindingVisualizer from './PathfindingVisualizer/PathfindingVisualizer';

function App() {
  return (
    <div className="App">
     <Navbar></Navbar>
      <PathfindingVisualizer></PathfindingVisualizer>
    </div>
  );
}

export default App;
