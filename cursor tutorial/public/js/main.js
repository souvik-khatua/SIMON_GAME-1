// Main JavaScript file for the Railway Tracker Application

// Show notification when destination reached (backup for the tracking page)
function showDestinationNotification(destinationName) {
  if ('Notification' in window) {
    if (Notification.permission === 'granted') {
      new Notification('Destination Reached!', {
        body: `You have arrived at ${destinationName}`,
        icon: '/img/train-icon.png'
      });
    } else if (Notification.permission !== 'denied') {
      Notification.requestPermission().then(permission => {
        if (permission === 'granted') {
          new Notification('Destination Reached!', {
            body: `You have arrived at ${destinationName}`,
            icon: '/img/train-icon.png'
          });
        }
      });
    }
  }
}

// Check for active elements in the navbar
document.addEventListener('DOMContentLoaded', function() {
  // Add bootstrap classes to tables
  const tables = document.querySelectorAll('table');
  tables.forEach(table => {
    if (!table.classList.contains('table')) {
      table.classList.add('table');
    }
  });
}); 