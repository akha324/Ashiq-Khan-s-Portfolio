console.log("About section slider script loaded");

let currentAboutSlide = 0;

function updateAboutSlider() {
  const aboutSlides = document.querySelectorAll(".about-slide");
  const aboutDots = document.querySelectorAll(".about-dots .dot");

  // Hide all slides and deactivate dots
  aboutSlides.forEach(slide => slide.classList.remove("active"));
  aboutDots.forEach(dot => dot.classList.remove("active"));

  // Show current slide and activate its dot
  if (aboutSlides[currentAboutSlide]) {
    aboutSlides[currentAboutSlide].classList.add("active");
  }

  if (aboutDots[currentAboutSlide]) {
    aboutDots[currentAboutSlide].classList.add("active");
  }
}

function moveAbout(direction) {
  const totalSlides = document.querySelectorAll(".about-slide").length;
  currentAboutSlide = (currentAboutSlide + direction + totalSlides) % totalSlides;
  updateAboutSlider();
}

function goAbout(index) {
  currentAboutSlide = index;
  updateAboutSlider();
}

// Initialize on page load
document.addEventListener("DOMContentLoaded", () => {
  updateAboutSlider();

  // Optional: allow left/right arrow keys to work too
  document.addEventListener("keydown", (e) => {
    if (e.key === "ArrowLeft") moveAbout(-1);
    if (e.key === "ArrowRight") moveAbout(1);
  });
});


function goAbout(index) {
  currentAboutSlide = index;
  updateAboutSlider();
}
