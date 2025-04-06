const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');
const path = require('path');
require('dotenv').config();

const app = express();

// Middleware
app.use(cors());
app.use(express.json());
app.use(express.static('public'));

// MongoDB Connection
mongoose.connect(process.env.MONGODB_URI || 'mongodb://localhost:27017/proposal', {
    useNewUrlParser: true,
    useUnifiedTopology: true
});

// Response Schema
const responseSchema = new mongoose.Schema({
    answer: String,
    date: Date,
    timestamp: { type: Date, default: Date.now }
});

const Response = mongoose.model('Response', responseSchema);

// Routes
app.post('/api/response', async (req, res) => {
    try {
        const { answer, date } = req.body;
        const response = new Response({
            answer,
            date: date ? new Date(date) : null
        });
        await response.save();
        res.status(201).json({ message: 'Response saved successfully', response });
    } catch (error) {
        res.status(500).json({ message: 'Error saving response', error: error.message });
    }
});

app.get('/api/responses', async (req, res) => {
    try {
        const responses = await Response.find().sort({ timestamp: -1 });
        res.json(responses);
    } catch (error) {
        res.status(500).json({ message: 'Error fetching responses', error: error.message });
    }
});

const PORT = process.env.PORT || 3000;
app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
}); 