const express = require('express');
const router = express.Router();

// Sample station data (replace with database in a real app)
const stations = [
  { id: 1, name: 'Central Station', code: 'CST', next: 2 },
  { id: 2, name: 'Park Street', code: 'PKS', next: 3 },
  { id: 3, name: 'City Square', code: 'CSQ', next: 4 },
  { id: 4, name: 'Riverside', code: 'RVS', next: 5 },
  { id: 5, name: 'Airport Terminal', code: 'APT', next: null }
];

// Get all stations
router.get('/', (req, res) => {
  res.render('stations/index', {
    title: 'Stations - Railway Tracker',
    activeTab: 'stations',
    stations: stations
  });
});

// Get journey tracker page
router.get('/journey', (req, res) => {
  res.render('stations/journey', {
    title: 'Journey Tracker - Railway Tracker',
    activeTab: 'journey',
    stations: stations
  });
});

// Track journey API endpoint
router.post('/track', (req, res) => {
  const { currentStation, destinationStation } = req.body;
  
  // Store journey in session
  req.session.journey = {
    currentStationId: parseInt(currentStation),
    destinationStationId: parseInt(destinationStation),
    started: Date.now()
  };
  
  res.redirect('/stations/tracking');
});

// Journey tracking page
router.get('/tracking', (req, res) => {
  if (!req.session.journey) {
    return res.redirect('/stations/journey');
  }
  
  const currentStation = stations.find(s => s.id === req.session.journey.currentStationId);
  const destinationStation = stations.find(s => s.id === req.session.journey.destinationStationId);
  
  res.render('stations/tracking', {
    title: 'Tracking Journey - Railway Tracker',
    activeTab: 'journey',
    journey: req.session.journey,
    currentStation,
    destinationStation,
    stations
  });
});

// API endpoint to update current station
router.post('/update-station', (req, res) => {
  const { stationId } = req.body;
  
  if (!req.session.journey) {
    return res.status(400).json({ error: 'No active journey' });
  }
  
  req.session.journey.currentStationId = parseInt(stationId);
  
  // Check if destination reached
  const destinationReached = req.session.journey.currentStationId === req.session.journey.destinationStationId;
  
  return res.json({
    success: true,
    currentStationId: req.session.journey.currentStationId,
    destinationReached
  });
});

// End journey
router.post('/end-journey', (req, res) => {
  delete req.session.journey;
  res.redirect('/stations/journey');
});

module.exports = router; 