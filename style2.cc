/* General styles */
body {
    margin: 0;
    padding: 0;
    background-color: #3f2e2e; 
    
    color: rgb(240,240,240);
    display: flex;
    align-items: center;
    flex-direction: column;
    width: 100vw;
    font-family: Verdana, Tahoma, sans-serif;
}

/* Styles for larger screens (laptops and desktops) */
@media screen and (min-width: 768px) {
    header {
        /* ... */
        width: 95%;
        max-width: 788px;
        display: flex;
        justify-content: flex-end;
        padding: 12px;
        margin-top: 15px;
}
    }

    .container {
        width: 91%;
        max-width: 680px;
        margin: 10px;
        display: flex;
        flex-direction: column;
        align-items: center;
    }

    .tile {
        /* ... */
        width: 100%;
        background-color: rgb(37,37,37);
        margin: 7px;
        border-radius: 17px;
        display: flex;
        justify-content: space-between;
        padding: 15px;
    }

    /* Adjust other styles for larger screens as needed */
}

/* Styles for smaller screens (tablets) */
@media screen and (max-width: 767px) {
    header {
        width: 95%;
        max-width: 788px;
        display: flex;
        justify-content: flex-end;
        padding: 12px;
        margin-top: 15px;
    }

    .container {
        width: 91%;
        max-width: 680px;
        margin: 10px;
        display: flex;
        flex-direction: column;
        align-items: center;
    }

    .tile {
        width: 100%;
        background-color: rgb(37,37,37);
        margin: 7px;
        border-radius: 17px;
        display: flex;
        justify-content: space-between;
        padding: 15px;
}   /* ... */
    }

    /* Adjust other styles for tablets as needed */
}

/* Styles for even smaller screens (mobiles) */
@media screen and (max-width: 480px) {
    header {
        width: 95%;
        max-width: 788px;
        display: flex;
        justify-content: flex-end;
        padding: 12px;
        margin-top: 15px;
}
    }

    .container {
        width: 91%;
        max-width: 680px;
        margin: 10px;
        display: flex;
        flex-direction: column;
        align-items: center;
    }

    .tile {
        /* ... */
        width: 100%;
        background-color: rgb(37,37,37);
        margin: 7px;
        border-radius: 17px;
        display: flex;
        justify-content: space-between;
        padding: 15px;
    }

    /* Adjust other styles for mobiles as needed */
}
