const express = require('express');
const router = express.Router();

// Home page
router.get('/', (req, res) => {
  res.render('index', {
    title: 'Railway Tracker',
    activeTab: 'home'
  });
});

// About page
router.get('/about', (req, res) => {
  res.render('about', {
    title: 'About - Railway Tracker',
    activeTab: 'about'
  });
});

module.exports = router; 