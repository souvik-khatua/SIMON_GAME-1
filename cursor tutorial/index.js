const express = require('express');
const session = require('express-session');
const mongoose = require('mongoose');
const path = require('path');
const app = express();

// Import routes
const indexRoutes = require('./routes/index');
const stationRoutes = require('./routes/stations');

// Set up EJS as the view engine
app.set('view engine', 'ejs');
app.set('views', path.join(__dirname, 'views'));

// Middleware
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.urlencoded({ extended: true }));
app.use(express.json());

// Session configuration
app.use(session({
  secret: 'railway-tracker-secret',
  resave: false,
  saveUninitialized: true,
  cookie: { secure: false } // Set to true if using HTTPS
}));

// Connect to MongoDB (uncomment when you have MongoDB setup)
// mongoose.connect('mongodb://localhost:27017/railway-tracker')
//   .then(() => console.log('Connected to MongoDB'))
//   .catch(err => console.error('Could not connect to MongoDB', err));

// Routes
app.use('/', indexRoutes);
app.use('/stations', stationRoutes);

// Error handling middleware
app.use((req, res, next) => {
  res.status(404).render('404', { title: 'Page Not Found' });
});

// Start the server
const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`);
}); 